#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++) {
        cin>>a[i];
    }
    int temp=0, temp1=0 , temp2;
    for ( int i =0;i<n;i++) {
        temp1 = temp1 | (temp&a[i]);
        temp ^= a[i];
        temp2 = ~(temp&temp1);
        temp &= temp2;
        temp1 &= temp2;
    }
    cout << temp;
	return 0;
}
