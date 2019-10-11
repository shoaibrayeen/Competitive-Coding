//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;

/*
 A = AND
 B = OR
 C = XOR
*/

bool getValue(string str) {
    int n = int(str.length());
    for ( int i = 0; i < n; i +=2 ) {
        if (str[i + 1] == 'A') {
            if (str[i + 2] == '0'|| str[i] == '0') {
                str[i + 2] = '0';
            }
            else {
                str[i + 2] = '1';
            }
        }
        else if (str[i + 1] == 'B') {
            if (str[i + 2] == '1'|| str[i] == '1') {
                str[i + 2] = '1';
            }
            else {
                str[i + 2] = '0';
            }
        }
        else {
            if (str[i + 2] == str[i]) {
                str[i + 2] = '0';
            }
            else {
                str[i + 2] = '1';
            }
        }
    }
    return str[n - 1] -'0';
}


int main() {
    cout << "\nEnter string\t:\t";
    string str;
    cin >> str;
    cout << "\nResult of String\t:\t" << getValue(str);
    cout << endl;
    return 0;
}

