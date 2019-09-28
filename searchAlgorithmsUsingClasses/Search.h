#ifndef SEARCH_H
#define SEARCH_H
#include <iostream>

class Search{
public:
    //constuctor.
    Search();
    //destuctor.
    ~Search();
    //pure virutal function.
    virtual int search(int array[], int sizeofArray, int key) = 0;
};

#endif // SEARCH_H
