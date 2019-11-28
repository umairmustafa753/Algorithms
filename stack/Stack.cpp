#include "Stack.h"

Stack::Stack():c(0){}

void Stack::createStack(int data){

    Node *topNode = new Node(data);
    HeadNode *temp = new HeadNode();

    temp->top = topNode;
    temp->count = ++c;
    head = temp;
}

void Stack::push(int data){

    if(head == NULL){
        createStack(data);
    }
    else{
        Node *topNode = new Node(data);
        topNode->next = head->top;
        head->top = topNode;
        head->count = ++c;
    }
}

int Stack::pop(){

    if(head->top == NULL){
        std::cout << "Stack underflow";
    }
    else{
        Node *temp = NULL;
        temp = head->top;
        head->count = --c;
        head->top = head->top->next;
        int tdata = temp->data;
        return tdata;
    }
}

int Stack::peek(){

    if(head == NULL){
       return -1;
    }
    else{
        return head->top->data;
    }
}

int Stack::getCount(){
    return head->count;
}

void Stack::destroyStack(){

    while(head->top != NULL){
        Node *temp = NULL;
        temp = head->top;
        head->count = --c;
        head->top = head->top->next;
    }
    std::cout << "Stack destroyed successfully !" << std::endl;
}
