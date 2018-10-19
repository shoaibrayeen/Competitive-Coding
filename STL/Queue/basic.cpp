//
//  q2.cpp
//  Algorithm
//
//  Created by Mohd Shoaib Rayeen on 18/10/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

void showq(queue <int> que) {
    queue <int> i = que;                                // Creating Copy of Queue
    while (!i.empty()) {
        cout << i.front() << "\t";                      // Displaying Queue using its copy
        i.pop();
    }
}

int main() {
    queue <int> temp;                                   // Declaring Queue
    temp.push(1);                                       // Insert elements in the queue
    temp.push(2);
    temp.push(3);
    cout << "\nQueue\t\t\t:\t";
    showq(temp);                                        // Displaying Queue
    cout << "\nSize of Queue\t:\t" << temp.size();      // Size of Queue
    cout << "\nFront Element\t:\t" << temp.front();     // Front Element of Queue
    cout << "\nBack Element\t:\t" << temp.back();       // Rear Element of Queue
    int t1 = temp.front();    // Popped Element
    temp.pop();                                         // Removing element from the queue
    cout << "\nPopped Element\t:\t" << t1;              // Popped Element
    cout << "\nQueue\t\t\t:\t";
    showq(temp);                                        // Displaying Queue
    cout << endl;                                       // Final Result -> 2 , 3
    return 0;
}
/*
   First in First out : FIFO
   User can access only front and rear element So Iterators can't access Queue.
*/



/*
    The functions supported by queue are ->
    empty() – Returns whether the queue is empty
    size() – Returns the size of the queue
    front() – Returns a reference to the first element of the queue
    back() – Returns a reference to the last element of the queue
    push(g) – Adds the element ‘g’ at the end of the queue
    pop() – Deletes the first element of the queue
*/
