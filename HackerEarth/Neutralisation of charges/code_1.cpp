#include <iostream>
#include <stack>
using namespace std;

void convert(char str[], int n) {
    stack<char> s;
    s.push(str[0]);
    for(int i = 1; i < n; i++) {
        if( s.empty() == true) {
            s.push(str[i]);
        }
        else if( s.top() == str[i]) {
            s.pop();
        }
        else {
            s.push(str[i]);
        }
    }
    n = int(s.size());
    for(int i = n - 1; i >= 0; i--) {
        str[i] = s.top();
        s.pop();
    }
    str[n] = '\0';
    printf("%d\n%s" , n ,str );
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%d" , &n);
    char s[1024];
    scanf("%s", s);
    convert(s, n);
}
