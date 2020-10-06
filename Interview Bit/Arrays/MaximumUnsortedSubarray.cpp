/*

You are given an array (zero indexed) of N non-negative integers, A0, A1 ,…, AN-1.
Find the minimum sub array Al, Al+1 ,…, Ar so if we sort(in ascending order) that sub array, then the whole array should get sorted.
If A is already sorted, output -1.

Input 1:

A = [1, 3, 2, 4, 5]

Return: [1, 2]

Input 2:

A = [1, 2, 3, 4, 5]

Return: [-1]

*/


vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    vector<int> v;
    int minn=INT_MAX,maxx=INT_MIN,l=0,r=0;
    for(int i=1;i<n;i++){
        if(A[i-1]>A[i]){
            minn=min(minn,A[i]);
            maxx=max(maxx,A[i-1]);
        }
    }
    for(int i=0;i<n;i++){
        if(A[i]>minn){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(A[i]<maxx){
            r=i;
            break;
        }
    }
    if(minn==INT_MAX && maxx==INT_MIN){
        v.push_back(-1);
        return v;
    }
    v.push_back(l);
    v.push_back(r);
    return v;
}

