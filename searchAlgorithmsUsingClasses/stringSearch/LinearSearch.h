#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include "Search.h"


class LinearSearch : public Search{
public:
    LinearSearch();
    ~LinearSearch();
    int search(std::string array[], int sizeofArray, std::string key);
};
#endif // LINEARSEARCH_H
