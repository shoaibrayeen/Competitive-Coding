#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int> arr , int n ) {
    int ans = 0, temp;
    for(int i = n; i >= 1; i-- ) {
        temp = 0;
        for( int k = n; k >= i; k-- ) {
            if ( arr[k] < arr[i]) {
                temp += i;
            }
        }
        ans += temp/i;
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%i", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    printf("%i\n" , helper(a , n));
}
