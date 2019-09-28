#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "Search.h"


class BinarySearch : public Search{
public:
    BinarySearch();
    ~BinarySearch();
    int search(int array[], int sizeofArray, int key);
};

#endif // BINARYSEARCH_H
