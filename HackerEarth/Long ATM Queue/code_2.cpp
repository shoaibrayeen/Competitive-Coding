#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%i", &n);
    int curr , prev;
    int nog = 1;
    scanf("%i", &prev);
    for(int i = 1; i < n; i++) {
        scanf("%i", &curr);
        if ( prev > curr) {
            nog++;
        }
        prev = curr;
    }
    printf("%d" , nog);
}
