//
//  q2.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 18/10/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s) {
    stack <int> i = s;                                // Creating Copy of Stack
    while (!i.empty()) {
        cout << i.top() << "\t";                      // Displaying Stack using its copy
        i.pop();
    }
}

int main() {
    stack <int> temp;                                    // Declaring Stack
    temp.push(1);                                        // Insert elements in the Stack
    temp.push(2);
    temp.push(3);
    cout << "\nStack\t\t\t:\t";
    showstack(temp);                                     // Displaying Stack
    cout << "\nSize of Stack\t:\t" << temp.size();       // Size of Stack
    cout << "\nTop Element\t\t:\t" << temp.top();        // Top Element
    int t1 = temp.top();                                 // Popped Element
    temp.pop();                                          // Removing element from Stack
    cout << "\nPopped Element\t:\t" << t1;               // Popped Element
    cout << "\nQueue\t\t\t:\t";
    showstack(temp);                                     // Displaying Stack
    cout << endl;                                        // Final Result -> 2 , 1
    return 0;
}

/*
  Last In First Out -> LIFO
  The functions associated with stack are:
  empty() – Returns whether the stack is empty – Time Complexity : O(1)
  size() – Returns the size of the stack – Time Complexity : O(1)
  top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
  push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
  pop() – Deletes the top most element of the stack – Time Complexity : O(1)
*/
