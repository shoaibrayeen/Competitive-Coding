#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    scanf("%i", &n);
    scanf("%i", &q);
    vector<int> a(n);
    for(int i = 1; i <= n; i++) {
        scanf("%i", &a[i]);
    }
    int b,l,r;
    for(int i = 0; i < q; i++) {
        scanf("%i", &b);
        if( b == 0) {
            scanf("%i", &l);
            scanf("%i", &r);
            if(a[r] == 0) {
                puts("EVEN");
            }
            else {
                puts("ODD");
            }
        }
        else {
            scanf("%i", &l);
            a[l] = !a[l];
        }
        
    }
}
