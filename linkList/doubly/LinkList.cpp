#include "LinkList.h"

LinkList::LinkList():head(NULL), tail(NULL){}
LinkList::~LinkList(){}


void LinkList::insertValue( std::string data ){
    Node *temp = new Node( data );

    if( head == NULL ){
        head = temp;
        tail = temp;
    }
    else{
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}

void LinkList::print(){
    Node *current = new Node();

     if( head == NULL )
        std::cout << "Link list is empty" << std::endl;

    current = head;

     while( current != NULL ){
        std::cout << current->data << std::endl;
        current = current->next;
     }
}
