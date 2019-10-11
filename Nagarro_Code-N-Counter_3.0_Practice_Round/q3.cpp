#include <iostream>
using namespace std;
int main() {
    int n;
    do{
        cin >>n;
    }while(n>=100);
    int a[n] , b[n];
    for ( int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for ( int i = 0; i<n; i++) {
        cin >> b[i];
    }
    int tim = 0;
    bool flag = false;
    for ( int i = 0; i<n;i++) {
        if (flag == true) {
            i--;
        }
        flag = false;
        if(a[i] == b[i]) {
            tim++;
        }
        else {
            int j =i;
            int temp = a[j];
            while(j < n-1) {
                a[j] = a[j+1];
                j++;
            }
            a[n-1] = temp;
            tim++;
            flag = true;
        }
    }
    cout << tim;
    return 0;
}
