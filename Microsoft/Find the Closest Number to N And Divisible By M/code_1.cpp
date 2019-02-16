//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 23/11/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;

int getClosetNumber(int n , int m) {
    
    int quotient = n / m;
    int n2;
    if ( n * m > 0 ) {
        n2  = m * (quotient + 1);
    }
    else {
        n2  = m * (quotient - 1);
    }
    if ( abs(n - m * quotient) < abs(n - n2)) {
        return m * quotient;
    }
    return n2;
}
int main() {
    int n , m;
    cout << "\nEnter N\t:\t";
    cin >> n;
    cout << "\nEnter M\t:\t";
    cin >> m;
    cout << "\nCloset Number\t:\t" << getClosetNumber(n, m);
    cout << endl;
    return 0;
}

