//
//  code_2.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include <iostream>
using namespace std;


char getFirstNonRepeatingCharacter(string str) {
    pair<int, int> arr[256];
    for (int i = 0; str[i]; i++) {
        (arr[str[i]].first)++;
        arr[str[i]].second = i;
    }
    int res = INT_MAX;
    for (int i = 0; i < 256; i++) {
        if (arr[i].first == 1) {
            res = min(res, arr[i].second);
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
