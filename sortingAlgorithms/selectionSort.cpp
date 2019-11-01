#include <iostream>
#include <string> 

void selectionSort( std::string array[], int n){
    int swap = 0, comparision = 0, steps = 0;

    int pos_min;
    std::string temp;
    for( int i = 0; i < n - 1; i ++){
        pos_min = i;
        for( int j = i + 1; j < n ; j++ ){

            comparision++;
            if( array[ j ] < array[ pos_min ]){
                pos_min = j;
            }
        }

        comparision++;
        if( pos_min != i ){
            swap++;
            temp = array[ i ];
            array[ i ] = array[ pos_min ];
            array[ pos_min ] = temp;
        }
    }

    steps = swap + comparision;

    std::cout << "\n\nNumber of comaprisons and swaps for this algorithm is: " << steps << std::endl;
}


int main(){

    int size = 10;
    
    std::string array[ size ];

    for( int i = 0; i < size; i ++){
        std::cout << "Enter element " << i + 1 << ": ";
        getline ( std::cin, array[ i ] ); 
    }

    selectionSort( array, size );

    std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i++ ){
        std::cout << array[ i ] << std::endl;
    }


    return 0;
}