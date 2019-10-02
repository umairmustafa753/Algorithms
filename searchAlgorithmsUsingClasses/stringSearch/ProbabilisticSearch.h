#ifndef PROBABILISTICSEARCH_H
#define PROBABILISTICSEARCH_H
#include "Search.h"


class ProbabilisticSearch : public Search{
public:
    ProbabilisticSearch();
    ~ProbabilisticSearch();
    int search(std::string array[], int sizeofArray, std::string key);
};

#endif // PROBABILISTICSEARCH_H
