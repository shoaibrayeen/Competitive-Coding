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


void toConvertIntoMRU(vector<int> array , int k) {
    int n = int(array.size());
    k = k % n;
    int temp = array[k];
    while( k > 0) {
        array[k] = array[k-1];
        k--;
    }
    array[0] = temp;
    cout << "\nMRU after K press\t:\t";
    for ( int  i = 0; i < n; i++ ) {
        cout << array[i] << "   ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "\nEnter Number of Apps\t:\t";
    cin >> n;
    vector<int> array(n);
    cout << "\nEnter Sequence of MRU Apps\n";
    for ( int i = 0 ;i < n;i++) {
        cin >> array[i];
    }
    cout << "\nEnter Numberof times Key Pressed\t:\t";
    cin >> n;
    toConvertIntoMRU(array, n);
    return 0;
}
