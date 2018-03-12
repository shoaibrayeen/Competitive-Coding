//
//  cyclic_rotate_by_one.cpp
//  Problems
//
//  Created by Mohd Shoaib Rayeen on 12/03/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
using namespace std;
//program for array left rotation by d variable

void display(int * array , int n ) {
    for ( int i = 0 ; i < n ; ++i ) {
        cout << array[i] << "\t";
    }
}
void rotate( int* array , int n ) {
    int temp = array[n-1];
    for( int i = n-1 ; i > 0 ; --i ) {
        array[i]=array[i-1];
    }
    array[0] = temp;
}

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
    display(array , n);
    //Displaying
    rotate(array , n);
    cout << "\nArray After Rotation\n";
    display(array , n);
    delete [] array;
    cout << endl;
    return 0;
}


