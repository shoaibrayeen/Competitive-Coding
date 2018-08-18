#include<iostream>
using namespace std;
void get(int arr[] , int n , int *x , int *y) {
    int xor1 = arr[0];
    for ( int i =1 ;i<n;++i) {
        xor1  ^= arr[i];
    }
    int set_bit = xor1 & ~(xor1-1);
    for ( int  i = 0 ; i < n ; i++) {
        if (arr[i] & set_bit) {
            *x = *x ^ arr[i];
        }
        else {
            *y = *y ^ arr[i];
        }
    }
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for ( int i =0 ; i < n; ++i) {
        cin>> arr[i];
    }
    int *x = new int[4];
    int *y = new int[4];
    get(arr , n , x , y);
    if ( *x < *y) {
     cout << *x << "  "<< *y;
    }
    else {
        cout << *y << " " << *x;
    }
	return 0;
}
