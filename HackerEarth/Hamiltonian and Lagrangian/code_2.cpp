#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%i", &n);
    stack<int> s;
    int temp;
    for(int i = 0; i < n; i++) {
        scanf("%i", &temp);
        if(s.empty() == true) {
            s.push(temp);
        }
        else {
            while(s.top() < temp ) {
                s.pop();
                if(s.empty() == true) {
                    break;
                }
            }
            s.push(temp);
        }
    }
    n = int(s.size());
    int arr[n];
    for(int i = n - 1; i >= 0; i--) {
        arr[i] = s.top();
        s.pop();
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
