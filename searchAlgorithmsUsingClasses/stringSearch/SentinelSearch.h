#ifndef SENTINELSEARCH_H
#define SENTINELSEARCH_H
#include "Search.h"


class SentinelSearch : public Search{
public:
    SentinelSearch();
    ~SentinelSearch();
    int search(std::string array[], int sizeofArray, std::string key);
};

#endif // SENTINELSEARCH_H
