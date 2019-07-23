#include <iostream>
#include <vector>
using namespace std;

int helper(vector<int> arr , int n) {
    int ans = 0;
    for(int i = 1; i < n; i++) {
        if( arr[i] > arr[i-1]) {
            arr[i-1] = 1;
        }
        else if ( arr[i] < arr[i - 1]) {
            arr[i] = 1;
        }
        ans += abs(arr[i] - arr[i-1]);
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
    scanf("%i", &n);
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        scanf("%i", &a[i]);
    }
    printf("%i\n" , helper(a , n));
}
