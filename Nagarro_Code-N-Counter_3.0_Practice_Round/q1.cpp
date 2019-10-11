#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 0;
    long long k;
    while(i < n) {
        cin >> k;
        if(k%2==0) {
            cout << k/2<<"\n";
         }
         else {
             cout << -(k+1)/2<<endl;
         }
        i++;
    }
	return 0;
}
