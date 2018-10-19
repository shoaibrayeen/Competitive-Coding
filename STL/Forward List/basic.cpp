//
//  q2.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 18/10/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//


#include<iostream>
#include<forward_list>
using namespace std;
int main() {
    forward_list<int> list1;                                // Declaring forward list
    forward_list<int> list2;                                // Declaring another forward list
    list1.assign( { 1 , 2, 3 , 4 ,5 , 6 } );                // Assigning values using assign()
    list1.push_front(7);                                    // Inserts 7 at front
    list1.emplace_front(8);                                 // Inserts 8 at front
    list1.pop_front();                                      // deletes 8 from front
    // Assigning repeating values using assign()
    list2.assign(6, 2);                                     // (para1 = number of times , para2 = elements)
    cout << "\nThe first forward list\t:\t";                //Displaying 1st List
    for (int&i : list1) {
        cout << i << " \t";
    }
    cout << "\nThe second forward list\t:\t";               //Displaying 2nd List
    for (int&j : list2) {
        cout << j << "\t";
    }
    cout << endl;
    return 0;
}
