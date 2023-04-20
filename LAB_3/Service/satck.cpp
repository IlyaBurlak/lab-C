//
// Created by Илья Бурлак on 19.04.2023.
//
#include <iostream>

using namespace std;

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