//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

void toConvertIntoAlternativeFashion(vector<int> array) {
    int n = int(array.size());
    sort(array.begin() , array.end());
    vector<int> even , odd;
    for ( int  i = 0; i < n; i++ ) {
        if ( array[i] % 2 == 0) {
            even.push_back(array[i]);
        }
        else {
            odd.push_back(array[i]);
        }
    }
    bool flag = true;
    if ( array[0] % 2 != 0 ) {
        flag = false;
    }
    int j = 0 , k = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( flag == false ) {
            array[i] = odd[j++];
            flag = !flag;
        }
        else {
            array[i] = even[k++];
            flag = !flag;
        }
    }
    cout << "\nArray after Modification\t:\t";
    for ( int  i = 0; i < n; i++ ) {
        cout << array[i] << "   ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "\nEnter Size of Array\t:\t";
    cin >> n;
    vector<int> array(n);
    cout << "\nEnter Array Elements\n";
    for ( int i = 0 ;i < n;i++) {
        cin >> array[i];
    }
    toConvertIntoAlternativeFashion(array);
    return 0;
}
