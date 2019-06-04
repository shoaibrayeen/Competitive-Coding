#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int* row , int * col , int r , int c) {
    for ( int i = 0; i < r; i++) {
        sort(col, col + c,greater<int>());
        int temp = row[i];
        if ( temp > c ) {
            cout << "NO\n";
            return;
        }
        if ( temp != 0) {
            for(int j = 0; j < temp; j++) {
                if ( col[j] > r) {
                    cout << "NO\n";
                    return;
                }
                col[j]--;
            }
        }
    }
    for ( int i = 0; i < c; i++) {
        if ( col[i] != 0 ) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t, r, c;
    cin >> t;
    for ( int p = 0; p < t; p++) {
        cin >> r;
        cin >> c;
        int row[r] , col[c];
        for ( int i = 0; i < r; i++) {
            cin >> row[i];
        }
        for ( int i = 0; i < c; i++) {
            cin >> col[i];
        }
        sort(row, row + r);
        solve(row ,col , r ,c);
    }
    return 0;
    
}
