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
    virtual int search(std::string array[], int sizeofArray, std::string key) = 0;
};

#endif // SEARCH_H
