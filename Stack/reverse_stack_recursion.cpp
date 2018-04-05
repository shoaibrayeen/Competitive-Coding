//
//  reverse_stack_recursion.cpp
//  Problems
//
//  Created by Mohd Shoaib Rayeen on 05/04/18.
//  Copyright © 2018 Shoaib Rayeen. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node {
    char data;
    Node *next;
};

void push(Node** top_ref, int new_data) {
    Node* new_node =(Node*) malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("\nStack overflow \n");
        exit(0);
    }
    new_node->data  = new_data;
    new_node->next = (*top_ref);
    (*top_ref)    = new_node;
}

int pop(Node** top_ref) {
    char res;
    Node *top;
    if (*top_ref == NULL) {
        printf("\nStack underflow \n");
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}

bool isEmpty(Node* top) {
    return (top == NULL)? 1 : 0;
}

void print(Node* top) {
    printf("\n");
    while (top != NULL) {
        printf(" %d ", top->data);
        top =  top->next;
    }
}

void insertAtBottom(Node** top_ref, int item) {
    if (isEmpty(*top_ref)) {
        push(top_ref, item);
    }
    else {
        int temp = pop(top_ref);
        insertAtBottom(top_ref, item);
        push(top_ref, temp);
    }
}

void reverse(Node** top_ref) {
    if (!isEmpty(*top_ref)) {
        int temp = pop(top_ref);
        reverse(top_ref);
        insertAtBottom(top_ref, temp);
    }
}

void mainloop() {
    char choice;
    int value;
    Node *s = NULL;
    bool done = true;
    while ( done ) {
        cout << "\n\t\tMenu";
        cout << "\n1. Insertion";
        cout << "\n2. Reverse";
        cout << "\n3. Exit";
        cout << "\nEnter Your Choice\t:\t";
        cin >> choice;
        switch (choice) {
            case '1':   cout << "\nEnter Value\t:\t";
                        cin >> value;
                        push(&s, value);
                        printf("\n Original Stack ");
                        print(s);
                        break;
            case '2':   reverse(&s);
                        printf("\n Reversed Stack ");
                        print(s);
                        break;
            case '3':   done = false;
                        break;
            default:    cout << "\nWrong Input\n";
                break;
        }
    }
}
int main() {
    mainloop();
    return 0;
}

