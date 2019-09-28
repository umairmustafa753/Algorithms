#ifndef PROBABILISTICSEARCH_H
#define PROBABILISTICSEARCH_H
#include "Search.h"


class ProbabilisticSearch : public Search{
public:
    ProbabilisticSearch();
    ~ProbabilisticSearch();
    int search(int array[], int sizeofArray, int key);
};

#endif // PROBABILISTICSEARCH_H
