//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include <iostream>
using namespace std;


int getMinimumSets(string str, int Y) {
    int count = 0;
    int num = 0;
    int len = int(str.length());
    bool flag = false;
    for (int i = 0; i < len; i++) {
        num = num * 10 + (str[i] - '0');
        if (num <= Y) {
            flag = true;
        }
        else {
            if (flag) {
                count += 1;
            }
            num = str[i] - '0';
            flag = false;
            if (num <= Y) {
                flag = true;
            }
            else {
                num = 0;
            }
        }
    }
    if (flag) {
        count += 1;
    }
    return count;
}

int main() {
    string str;
    cout << "\nEnter String\t:\t";
    cin >> str;
    int n;
    cout << "\nEnter Y\t:\t";
    cin >> n;
    cout << "\nMinimum Sets\t:\t" << getMinimumSets(str,n) << "\n";
    return 0;
}
