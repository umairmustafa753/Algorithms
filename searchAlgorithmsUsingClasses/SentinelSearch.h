#ifndef SENTINELSEARCH_H
#define SENTINELSEARCH_H
#include "Search.h"


class SentinelSearch : public Search{
public:
    SentinelSearch();
    ~SentinelSearch();
    int search(int array[], int sizeofArray, int key);
};

#endif // SENTINELSEARCH_H
