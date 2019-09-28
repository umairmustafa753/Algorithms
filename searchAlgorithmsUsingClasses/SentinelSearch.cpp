#include "SentinelSearch.h"


SentinelSearch::SentinelSearch(){}
SentinelSearch::~SentinelSearch(){}

int SentinelSearch::search( int array[], int sizeOfArray, int key ){
    //local variables.
    int index = 0;
    int last = array[ sizeOfArray - 1 ];
    
    array[ sizeOfArray - 1 ] = key;
    while( index < sizeOfArray && array[ index ] != key){
        index++;
    }
    array[ sizeOfArray - 1 ]  = last;
    if( index < sizeOfArray - 1 && array[ index ] == key ){
        return index;
    }

    return -1;
}
