#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int i=0;
    while(i<t) {
        float m1,m2,c1,c2;
        cin >>m1 >>c1 >>m2>>c2;
        float x,y;
            x = (c2-c1)/(m1-m2);
            y = m2*x+c2;
            if(y >= 0 && x >= 0) {
                cout << floor(y+0.5) << endl;
            }
            else {
                cout << -1 <<endl;
            }
        i++;
    }
    return 0;
}
