//
// Created by Илья Бурлак on 19.04.2023.
//
#include <iostream>
#include "stack.h"
using namespace std;

    int depth = 0;
    int max_depth;
    struct Node *top = nullptr;
    Stack(int n);

    int Stack(int n) {
        max_depth = n;
}

    exception Stack::push(int element) {
        if (depth == max_depth)
            throw exception();

        depth++;
        Node *temp = (Node *) operator new(sizeof(Node));
        temp->data = element;
        temp->next = top;
        top = temp;
    }
    void Stack::pop() {
        depth--;
        struct Node *temp = top;
        if (top == nullptr) {
            return;
        }
        top = top->next;
        free(temp);
    }

};