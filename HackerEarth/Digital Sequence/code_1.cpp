#include<bits/stdc++.h>
using namespace std;

int solve (vector<int> arr) {
   int count[10] = {0};
   int n = arr.size();
   for(int i = 0; i < n; i++ ) {
        int temp = arr[i];
        bool hash[10];
        memset(hash, false, sizeof(hash));
        while( temp > 0) {
           if( hash[temp%10] == false) {
               count[temp%10]++;
           }
           hash[temp%10] = true;
           temp /= 10;
       }
   }
   
   int res = 0;
   for( int i = 0; i < 10; i++) {
       res = max( count[i] , res);
   }
   return res;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    int out_;
    out_ = solve(arr);
    cout << out_;
}
