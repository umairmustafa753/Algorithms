#include <iostream>
#ifndef STACK_H
#define STACK_H
template <class T>

class Stack{
private:
    T *arr;
    int top;
public:
    Stack();
    void push(T);
    T pop();
    T peek();
    int size();
    int empty();
};
#endif
