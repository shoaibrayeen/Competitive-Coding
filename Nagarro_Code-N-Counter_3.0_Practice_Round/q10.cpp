#include<iostream>
using namespace std;
int main() {
    int n;
    do {
        cin >> n;
    } while( n <= 0 && n>10000);
    int a[n];
    for ( int i =0; i < n;i++) {
        do {
            cin >> a[i];
        }while(a[i] < 0);
    }
    int alpha = 0;
    for ( int i = 0 ; i < n; i++) {
        for(int j = 0; j < i ;j++) {
            if (a[i] > a[j]) {
                alpha += a[j];
            } 
        }
    }
    alpha = alpha%1000000007;
    cout << alpha;
	return 0;
}
