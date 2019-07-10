#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%i", &n);
    vector<int> a(n);
    int temp;
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        scanf("%i", &temp);
        printf("%i " , temp + a[i]);
    }
    return 0;
}
