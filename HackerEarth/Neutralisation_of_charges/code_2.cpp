#include <iostream>
using namespace std;

char stack[10000];
int top = -1;
void push(char c) {
    top++;
    stack[top] = c;
}

void match(char c) {
    if(stack[top] == c) {
        top--;
    }
    else {
        push(c);
    }
}
void convert(char str[], int n) {
    push(str[0]);
    for(int i = 1; i < n; i++) {
        match(str[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%d" , &n);
    char s[1024];
    scanf("%s", s);
    convert(s , n);
    printf("%d\n" , top + 1 );
    for(int i = 0; i <= top; i++) {
        printf("%c" , stack[i]);    
    }
    return 0;
}
