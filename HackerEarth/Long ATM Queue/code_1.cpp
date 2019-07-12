#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%i", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    int nog = 1;
    for( int i = 0; i < n -1; i++) {
        if( a[i] > a[i+1] ) {
            nog++;
        }
    }
    printf("%d" , nog);
}
