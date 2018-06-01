// CPP Program to Find the XOR-sum
// of elements that appeared even
// number of times within a range
#include <bits/stdc++.h>
using namespace std;
 
/* structure to store queries
   L --> Left Bound of Query
   R --> Right Bound of Query
   idx --> Query Number */
struct que {
    int L, R, idx;
};
 
// cmp function to sort queries 
// according to R
bool cmp(que a, que b)
{
    if (a.R != b.R)
        return a.R < b.R;
    else
        return a.L < b.L;
}
 
/*  N  --> Number of elements present in
    input array. BIT[0..N] --> Array that 
    represents Binary Indexed Tree*/
 
// Returns XOR-sum of arr[0..index]. This
// function assumes that the array is
// preprocessed and partial sums of array 
// elements are stored in BIT[].
int getSum(int BIT[], int index)
{
    // Iniialize result
    int xorSum = 0;
 
    // index in BITree[] is 1 more than
    // the index in arr[]
    index = index + 1;
 
    // Traverse ancestors of BIT[index]
    while (index > 0) 
    {
        // Take XOR of current element 
        // of BIT to xorSum
        xorSum ^= BIT[index];
 
        // Move index to parent node
        // in getSum View
        index -= index & (-index);
    }
    return xorSum;
}
 
// Updates a node in Binary Index Tree
// (BIT) at given index in BIT.  The
// given value 'val' is xored to BIT[i] 
// and all of its ancestors in tree.
void updateBIT(int BIT[], int N, 
               int index, int val)
{
    // index in BITree[] is 1 more than 
    // the index in arr[]
    index = index + 1;
 
    // Traverse all ancestors and 
    // take xor with 'val'
    while (index <= N) 
    {
        // Take xor with 'val' to 
        // current node of BIT
        BIT[index] ^= val;
 
        // Update index to that of 
        // parent in update View
        index += index & (-index);
    }
}
 
// Constructs and returns a Binary Indexed
// Tree for given array of size N.
int* constructBITree(int arr[], int N)
{
    // Create and initialize BITree[] as 0
    int* BIT = new int[N + 1];
     
    for (int i = 1; i <= N; i++)
        BIT[i] = 0;
 
    return BIT;
}
 
// Function to answer the Queries
void answeringQueries(int arr[], int N,
        que queries[], int Q, int BIT[])
{
    // Creating an array to calculate
    // prefix XOR sums
    int* prefixXOR = new int[N + 1];
 
    // map for coordinate compression
    // as numbers can be very large but we
    // have limited space
    map<int, int> mp;
 
    for (int i = 0; i < N; i++) {
         
        // If A[i] has not appeared yet
        if (!mp[arr[i]])
            mp[arr[i]] = i;
 
        // calculate prefixXOR sums
        if (i == 0)
            prefixXOR[i] = arr[i];
        else
            prefixXOR[i] = 
                prefixXOR[i - 1] ^ arr[i];
    }
 
    // Creating an array to store the
    // last occurence of arr[i]
    int lastOcc[1000001];
    memset(lastOcc, -1, sizeof(lastOcc));
 
    // sort the queries according to comparator
    sort(queries, queries + Q, cmp);
 
    // answer for each query
    int res[Q];
 
    // Query Counter
    int j = 0;
     
    for (int i = 0; i < Q; i++) 
    {
        while (j <= queries[i].R) 
        {
            // If last visit is not -1 update
            // arr[j] to set null by taking
            // xor with itself at the idx 
            // equal lastOcc[mp[arr[j]]]
            if (lastOcc[mp[arr[j]]] != -1)
                updateBIT(BIT, N, 
                      lastOcc[mp[arr[j]]], arr[j]);
 
            // Setting lastOcc[mp[arr[j]]] as j and
            // updating the BIT array accordingly
            updateBIT(BIT, N, j, arr[j]);
            lastOcc[mp[arr[j]]] = j;
            j++;
        }
 
        // get the XOR-sum of all elements within
        // range using precomputed prefix XORsums
        int allXOR = prefixXOR[queries[i].R] ^ 
                     prefixXOR[queries[i].L - 1];
 
        // get the XOR-sum of distinct elements
        // within range using BIT query function
        int distinctXOR = getSum(BIT, queries[i].R) ^ 
                          getSum(BIT, queries[i].L - 1);
 
        // store the final answer at the numbered query
        res[queries[i].idx] = allXOR ^ distinctXOR;
    }
 
    // Output the result
    for (int i = 0; i < Q; i++)
        cout << res[i] << endl;
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 1, 2, 1, 3, 3, 2, 3 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    int* BIT = constructBITree(arr, N);
 
    // structure of array for queries
    que queries[5];
 
    // Intializing values (L, R, idx) to queries
    queries[0].L = 3; 
    queries[0].R = 6, queries[0].idx = 0;
    queries[1].L = 3; 
    queries[1].R = 4, queries[1].idx = 1;
    queries[2].L = 0; 
    queries[2].R = 2, queries[2].idx = 2;
    queries[3].L = 0; 
    queries[3].R = 6, queries[3].idx = 3;
    queries[4].L = 0; 
    queries[4].R = 4, queries[4].idx = 4;
 
    int Q = sizeof(queries) / sizeof(queries[0]);
 
    // answer Queries
    answeringQueries(arr, N, queries, Q, BIT);
 
    return 0;
}
