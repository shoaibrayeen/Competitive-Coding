#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
long long solve (vector<long long> A) {
    int n = A.size();
    if(n >= 64) {
        return 0;
    }
    long long nops = 1LL << (n - 1);
    long long sum = 0;
    for(auto i: A) {
       if( i >= nops)
            sum = (sum + i % MOD) % MOD;
   }
   return sum;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++) {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A = 0; i_A < N; i_A++) {
        	cin >> A[i_A];
        }
 
        long long out;
        out = solve(A);
        cout << out;
        cout << "\n";
    }
}
