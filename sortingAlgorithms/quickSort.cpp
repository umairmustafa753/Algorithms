#include <iostream>
#include <string> 

//global Variable.
int swap = 0, comparision = 0, steps = 0;

int partition( std::string array[], int start, int end ){
    
    std::string pivot = array[ end ];
    int pIdx = start - 1;

    for( int j = start; j <= end - 1; j++ ){
        comparision++;
        if( array[ j ] <= pivot ){
            pIdx++;
            swap++;
            std::string temp = array[ pIdx ];
            array[ pIdx ] = array[ j ];
            array[ j ] = temp;
        }
    }

    swap++;
    std::string temp = array[ pIdx + 1 ];
    array[ pIdx + 1 ] = array[ end ];
    array[ end ] = temp;


    return ( pIdx + 1 );
}

void quickSort( std::string array[], int start, int end ){
    if( start < end ){
        int pi = partition( array, start, end );

        quickSort( array, start, pi - 1 );
        quickSort( array, pi + 1, end );
    }
}


int main(){

    int size = 10;
    
    std::string array[ size ];

    for( int i = 0; i < size; i ++){
        std::cout << "Enter element " << i + 1 << ": ";
        getline ( std::cin, array[ i ] ); 
    }

    quickSort( array, 0, size - 1 );

    std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i ++){
        std::cout << array[ i ] << std::endl;
    }

    steps = swap + comparision;

    std::cout << "\n\nNumber of comaprisons and swaps for this algorithm is: " << steps << std::endl;

    return 0;
}