//
// Created by Илья Бурлак on 21.04.2023.
//

#ifndef LAB_3_STACK_H
#define LAB_3_STACK_H

struct Node {
    int data;
    struct Node* next;
};

class Stack {
public:
    void push();
    void pop();

}


#endif //LAB_3_STACK_H
