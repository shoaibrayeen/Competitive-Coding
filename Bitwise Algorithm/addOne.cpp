#include <iostream>
using namespace std;
 
int addOne(int x) {
    int m = 1;
    while( x & m ) {
        x = x ^ m;
        m <<= 1;
    }
    x = x ^ m;
    return x;
}

int main() {
    int n;
    cout << "\nEnter Number\t\t:\t";
    cin >> n;
    cout << "\nNumber after adding one\t:\t" <<addOne(n);
    return 0;
}
