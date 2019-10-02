#include "ProbabilisticSearch.h"

ProbabilisticSearch::ProbabilisticSearch(){}
ProbabilisticSearch::~ProbabilisticSearch(){}
int ProbabilisticSearch::search( std::string array[], int sizeofArray, std::string key ){
    //local variables.
    int index = 0;
    int valueFoundFlag = 0;

    while( index < sizeofArray && array[ index ] != key )
        index++;

    if( array[ index ] == key)
        valueFoundFlag = index;
        
     //shifting value towards started index.
    if( valueFoundFlag != 0 ){
        std::string temp = array[ valueFoundFlag - 1 ];
        array[ valueFoundFlag - 1 ] = array[ valueFoundFlag ];
        array[ valueFoundFlag ] = temp ;
    }
    else if( array[ index ] != key )
        return - 1;
    
    return valueFoundFlag;
}

