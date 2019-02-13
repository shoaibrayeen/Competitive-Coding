//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include <iostream>
using namespace std;


char getFirstNonRepeatingCharacter(string str) {
    int array[256];
    for ( int i = 0; i < 256; i++ ) {
        array[i] = -1;
    }
    for (int i = 0; str[i]; i++) {
        if (array[str[i]] == -1) {
            array[str[i]] = i;
        }
        else {
            array[str[i]] = -2;
        }
    }
    int res = INT_MAX;
    for (int i = 0; i < 256; i++) {
        if (array[i] >= 0) {
            res = min(res, array[i]);
        }
    }
    return str[res];
}

int main() {
    string str;
    cout << "\nEnter String\t:\t";
    cin >> str;
    cout << "\nFirst Non-Repeating Character\t:\t" << getFirstNonRepeatingCharacter(str) << "\n";
    return 0;
}
