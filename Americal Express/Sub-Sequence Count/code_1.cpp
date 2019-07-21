#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int> arr , int n , int k) {
    int ans = n;
    for(int i = 0; i < n - 1; i++) {
        for( int j = i + 1; j < n; j++) {
            if ( abs( arr[i] - arr[j] ) <= k ) {
                ans++;
            }
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , k;
    scanf("%i", &n);
    scanf("%i", &k);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    printf("%i\n" , helper(a , n , k));
}
