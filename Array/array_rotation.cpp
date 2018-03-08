//
//  array_rotation.cpp
//  Problems
//
//  Created by Mohd Shoaib Rayeen on 09/03/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;
//program for array left rotation by d variable
int main() {
    cout << "\nEnter Array Size\t:\t";
    int n;
    cin >> n;
    //Dynamic Array
    int * array = new int[n];
    //Array Insertion
    cout << "\nEnter Array Elements\n";
    for( int i = 0; i < n; ++i ) {
        cin >> array[i];
    }
    //Array Display
    cout << "\nArray Before Rotation\n";
    for ( int i = 0 ; i < n ; ++i ) {
        cout << array[i] << "\t";
    }
    //Number of Left Shift
    int d;
    cout << "\nNumber of elements need to rotate\t:\t";
    cin >> d;
    // if d > = n , taking reminder to rotate array
    if ( d >= n ) {
        d = d % n;
    }
    // Main Code
    for ( int j = 1 ; j <= d ; ++j ) {
        int temp = array[0];
        for ( int i = 0 ; i < ( n - 1 ) ; ++i ) {
            array[i]=array[i+1];
        }
        array[n-1] = temp;
    }
    //Displaying
    cout << "\nArray After Rotation\n";
    for ( int i = 0 ; i < n ; ++i ) {
        cout << array[i] << "\t";
    }
    delete [] array;
    cout << endl;
    return 0;
}

