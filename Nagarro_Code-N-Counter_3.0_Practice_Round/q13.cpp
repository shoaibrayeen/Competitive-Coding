#include <bits/stdc++.h>
using namespace std;
int subCount(int arr[], int n)
{
    int mod[n];
    memset(mod, 0, sizeof(mod));
    int cumSum = 0;
    for (int i = 0; i < n; i++) {
        cumSum += arr[i];
        mod[((cumSum % n) + n) % n]++;
    }
 
    int result = 0;
    for (int i = 0; i < n; i++)
        if (mod[i] > 1)
            result += (mod[i] * (mod[i] - 1)) / 2;
 
    result += mod[0];
    return result;
}
int main() {
    int t ;
    cin >> t;
    int k =0;
    while (k<t) {
        int n ;
        cin >>n;
        signed int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        cout <<subCount(a,n) << endl;
        k++;
    }
	return 0;
}
