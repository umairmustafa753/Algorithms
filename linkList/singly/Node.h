#ifndef NODE_H
#define NODE_H
#include <iostream>

struct Node{
    std::string data;
    Node *next;
    Node(std::string value);
    Node();
    ~Node();
};
#endif // NODE_H
