//
//  power_of_two.cpp
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
    if ( (num & ( num - 1 ) ) == 0 ) {
        cout << "\n" << num << " is power of 2.\n";
    }
    else {
        cout << "\n" << num << " is not power of 2.\n";
    }
    return 0;
}
