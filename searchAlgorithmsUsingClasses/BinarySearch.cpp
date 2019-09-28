#include "BinarySearch.h"


BinarySearch::BinarySearch(){}
BinarySearch::~BinarySearch(){}

int BinarySearch::search( int array[], int sizeOfArray, int key ){
    //local variables.
    int mid = 0,min = 0;
    int max = array[ sizeOfArray - 1 ];
    
    while( min <= max ){
        mid = ( min + max ) / 2;
        if( array[ mid ] == key ){
            return mid;
        }
        else if( key < array[ mid ] )
            max = mid - 1;
        else
            min = mid + 1;
    }

    return -1;
}
