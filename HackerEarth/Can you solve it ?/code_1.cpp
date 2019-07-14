#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t , a;
    scanf("%i", &t);
    for( int I_T = 0; I_T < t; I_T++)  {
        scanf("%i", &n);
        int max1 = -1, min1 = 10000000;
        int max2 = -1, min2 = 10000000;
        for(int i = 0; i < n; i++) {
            scanf("%i", &a);
            max1 = max( a + i, max1);
            max2 = max( a - i, max2);
 
            min1 = min( a + i, min1);
            min2 = min( a - i, min2);
        }
        printf("%i\n", max(max1 - min1, max2 - min2) );
    }
}
