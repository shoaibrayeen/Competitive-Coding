//
//  code_1.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 17/10/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;

bool hasFour(int num) {
    while(num > 0) {
        int r = num % 10;
        if ( r == 4 ) {
            return true;
        }
        num = num/10;
    }
    return false;
}

int main() {
    int testCase;
    cin >> testCase;
    int i = 0;
    int array[testCase];
    for ( int i  = 0; i < testCase; i++ ) {
        cin >> array[i];
    }
    int A , B;
    while ( i < testCase) {
        if( hasFour(array[i])) {
            A = array[i]/3;
            B = array[i]  - (array[i]/3);
            while ( B < array[i] ) {
                if( !hasFour(A) && !hasFour(B) ) {
                    cout << A << "   " << B << endl;
                    break;
                }
                B++;
                A--;
            }
        }
        i++;
    }
    return 0;
}
