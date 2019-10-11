#include<iostream>
using namespace std;
int res(int a[] , int n) {
    int c =0 ;
    for ( int i =0;i < n; i++) {
        for (int j= i+1; j< n ;j++) {
            if (a[i] > a[j]) {
                c++;
            }
        }
    }
    return c;
}
int main() {
    int m;
    cin >> m;
    int k =0;
    while (k<m) {
        int n;
        cin >> n;
        int a[n];
        for ( int i=0;i<n;i++) {
            cin >>a[i];
        }
        cout << res(a,n) <<endl;
        k++;
    }
	return 0;
}
