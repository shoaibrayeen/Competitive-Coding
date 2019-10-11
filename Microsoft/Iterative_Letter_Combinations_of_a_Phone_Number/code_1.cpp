//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include <iostream>
#include <queue>

using namespace std;
void getLetterCombinations(vector<int> input) {
    int n = int(input.size());
    string table[10] = { " ", " ", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
    cout << "\nAll Possible Combinations\n";
    queue<string> q;
    q.push("");
    while (!q.empty()) {
        string str = q.front();
        q.pop();
        if (str.length() == n) {
            cout << str << "  ";
        }
        else {
            for (auto letter: table[input[str.length()]]) {
                q.push(str + letter);
            }
        }
    }
}


int main() {
    cout << "\nEnter Total Enteries\t:\t";
    int n;
    cin >> n;
    vector<int> input(n);
    cout << "\nEnter Digits\t:\t";
    for ( int i = 0; i < n; i++ ) {
        cin >> input[i];
    }
    getLetterCombinations(input);
    cout << endl;
    return 0;
}
