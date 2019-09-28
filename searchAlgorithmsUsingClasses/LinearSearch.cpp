#include "LinearSearch.h"

LinearSearch::LinearSearch(){}
LinearSearch::~LinearSearch(){}
int LinearSearch::search( int array[], int sizeofArray, int key ){
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

