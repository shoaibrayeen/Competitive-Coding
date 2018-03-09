//
//  reset_right_most_set_bit.cpp
//  Problems
//
//  Created by Mohd Shoaib Rayeen on 09/03/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "\nEnter Number\t:\t";
    cin >> num;
    cout << "\nAfter clearing right most set bit\t:\t" << ( num & (num -1 ) ) << "\n";
    return 0;
}
