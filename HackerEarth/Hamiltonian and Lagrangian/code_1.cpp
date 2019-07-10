#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, j, i;
    scanf("%i", &n);
    vector<int> a(n);
    for( i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    for( i = 0; i < n; i++){ 
        for( j = i+1; j < n; j++) {
            if( a[i] >= a[j]) { 
                continue;
            }
            else {
                break;
            }
        }
        if( j == n ) {
            printf("%i ",a[i]);
        }
        else {
            continue;
        }
    }
    return 0;
}
