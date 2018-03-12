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

void display(int * array , int n ) {
    for ( int i = 0 ; i < n ; ++i ) {
        cout << array[i] << "\t";
    }
}
void reverse( int* array , int start , int last ) {
    int temp;
    while(start < last ) {
        temp = array[start];
        array[start] = array[last];
        array[last] = temp;
        ++start;
        --last;
    }
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
    //Number of Left Shift
    int d;
    cout << "\nNumber of elements need to rotate\t:\t";
    cin >> d;
    // if d > = n , taking reminder to rotate array
    if ( d >= n ) {
        d = d % n;
    }
    //reversal algorithm
    reverse(array , 0 , d -1 );
    reverse(array , d , n - 1);
    reverse(array , 0 , n-1);
    
    //Displaying
    cout << "\nArray After Rotation\n";
    display(array , n);
    delete [] array;
    cout << endl;
    return 0;
}

