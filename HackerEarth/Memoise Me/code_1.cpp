#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    scanf("%i", &n);
    vector<int> f(1001);
    for (int i = 0; i < n; ++i) {
        scanf("%i", &m);
        ++f[m];
    }
    scanf("%i", &m);
    do {
        scanf("%i", &n);
        if (f[n]) {
            printf("%i\n", f[n]);
        } else {
            puts("NOT PRESENT");
        }
    } while (--m);
    return 0;
}
