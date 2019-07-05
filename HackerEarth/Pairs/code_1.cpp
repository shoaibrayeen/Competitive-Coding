#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n) {
    int p = sqrt(n);
    for(int i = 2; i <= p; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
	int t,l,r;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> l;
        cin >> r;
        if ( l == r) {
            cout << "0" << "\n";
            continue;
        }
        int np = 0, nn = 0;
        for(int j = l; j <= r; j++) {
            if(prime(j) == true) {
                np++;
            }
            else {
                nn++;
            }
        }
        cout << np*nn << "\n";
    }
}
