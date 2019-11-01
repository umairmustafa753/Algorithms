#ifndef LINKLIST_H
#define LINKLIST_H
#include<iostream>
#include"Node.h"

class LinkList{
private:
    Node *head;
    Node *tail;
public:
    LinkList();
    ~LinkList();
    void insertValue( std::string data );
    void searchValue( std::string data );
    bool deleteValue( std::string data );
    void print();
};
#endif // LINKLIST_H
