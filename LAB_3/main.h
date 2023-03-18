//
// Created by Илья Бурлак on 07.03.2023.
//


#ifndef LAB_3_MAIN_H
#define LAB_3_MAIN_H

#include <iostream>
using namespace std;


class start {

};


struct Node {
    int data;
    struct Node* next;
};
class Stack {
public:
    int depth = 0;
    int max_depth;
    struct Node *top = nullptr;
    Stack(int n) {
        max_depth = n;
    }
    void push(int element) {
        if (depth == max_depth) {
            cout << "Max stack depth reached" << '\n';
            return;
        }
        depth++;
        Node *temp = (Node *) operator new(sizeof(Node));
        temp->data = element;
        temp->next = top;
        top = temp;
    }
    void pop() {
        depth--;
        struct Node *temp = top;
        if (top == nullptr) {
            return;
        }
        top = top->next;
        free(temp);
    }
    void display() {
        Node* temp = top;
        cout << "Stack: <top> ";
        while (temp->next != nullptr) {
            cout << temp->data << " <- ";
            temp = temp->next;
        }
        cout << temp->data << " <bottom>";
    }
};
#endif