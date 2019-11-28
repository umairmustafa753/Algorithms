#include "Node.h"
#include "HeadNode.h"


class Stack{
private:
    HeadNode *head = NULL;
    int c;
public:
    Stack();
     void createStack(int data);
     void push(int data);
     int pop();
     int peek();
     int getCount();
     void destroyStack();
};
