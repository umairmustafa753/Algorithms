#include "StackTemplate.h"
#define MAX 50

template <class T>
Stack<T>::Stack(){
    top = -1;
    arr = new T[MAX];
}

template <class T>
int Stack<T>::empty(){
    if(top < 0)
        return -1;
    return 0;
}

template <class T>
void Stack<T>::push(T x){
    if(top < MAX){
        arr[++top] = x;
        std::cout << "\n" << x << "pushed onto stack";
    }
    else{
        std::cout << "\n" << "stack overflow";
    }
}

template <class T>
T Stack<T>::pop(){
    T x;
    if(!empty()){
        x = arr[top--];
        return x;
    }
    else{
        std::cout << "\nstack underflow";
        return -1;
    }
}

template <class T>
T Stack<T>::peek(){
    return arr[top];
}

template <class T>
int Stack<T>::size(){
    return top+1;
}
