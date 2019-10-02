#include "LinearSearch.h"

LinearSearch::LinearSearch(){}
LinearSearch::~LinearSearch(){}
int LinearSearch::search( std::string array[], int sizeofArray, std::string key ){
    //local variable.
    int index = 0;

    while( index < sizeofArray && array[index] != key ){
        index++;
    }
    if( index > sizeofArray || array[ index ] != key ){
        return -1;
    }

    return index;
}

