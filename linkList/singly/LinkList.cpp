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
        tail->next = temp;
        tail = temp;
    }

}
void LinkList::print(){

    Node *current = new Node();

    if( head == NULL ){
        std::cout << "List is Empty" << std::endl;
    }
    else{
        current = head;
    while( current != NULL ){
        std::cout << current->data << std::endl;
        current = current->next;
    }
    }
}

void LinkList::searchValue( std::string data ){

    Node *current = new Node();

    current = head;

    while( current != NULL && current->data != data )
        current = current->next;



    if( current != NULL )
        std::cout << "Search: value is found " << std::endl;
    else
        std::cout << "Search: value is not found " << std::endl;;

}
bool LinkList::deleteValue( std::string data ){

    Node *current = new Node();

    if( head == NULL )
        return false;

    current = head;

    if( current->data == data ){
        if( head == tail ){
            head = NULL;
            tail = NULL;
        }
        else
            head = head->next;
    return true;
    }
    while( current->next != NULL && current->next->data != data )
        current = current->next;
    if( current->next != NULL ){
        if( current->next == tail ){
            tail = current;
        }
        current->next = current->next->next;
        return true;
    }

    return false;
}

