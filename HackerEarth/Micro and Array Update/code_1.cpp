#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n,k;
    scanf("%i", &t);
    for(int p = 0; p < t; p++) {
        scanf("%i", &n);
        scanf("%i", &k);
        vector<int> a(n);
        scanf("%i", &a[0]);
        int min = a[0];
        for(int i = 1; i < n; i++) {
            scanf("%i", &a[i]);
            if( min > a[i]){
                min = a[i];
            }
        }
        if ( k <= min) {
            printf("0\n" , ( k - min) );
        }
        else {
            printf("%i\n" , ( k - min) );
        }
    }
    return 0;
}
