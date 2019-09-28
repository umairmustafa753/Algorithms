#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include "Search.h"


class LinearSearch : public Search{
public:
    LinearSearch();
    ~LinearSearch();
    int search(int array[], int sizeofArray, int key);
};
#endif // LINEARSEARCH_H
