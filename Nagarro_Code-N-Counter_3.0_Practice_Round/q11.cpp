#include<iostream>
using namespace std;
int main() {
    char s1[1000] , s2[1000];
    cin >> s1;
    cin >> s2;
    bool flag = false;
    for ( int i =0; s1[i]!='\0';i++) {
        flag = true;
        if (s2[i] == '*') {
            cout << "MATCHED";
            break;
        }
        else if (s2[i] != s1[i] && s2[i] !='?') {
            cout << "NOT MATCHED";
            break;
        }
    }
    if (flag == false) {
        cout << "NOT MATCHED";
    }
	return 0;
}
