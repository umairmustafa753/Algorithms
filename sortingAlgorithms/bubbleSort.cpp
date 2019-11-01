#include <iostream>
#include <string> 

void bubbleSort( std::string array[], int n){
    int swap = 0, comparision = 0, steps = 0;

    for( int i = 0; i < n - 1; i ++){
        for( int j = 0; j < n - i - 1; j++ ){
            comparision++;
            if( array[ j ] > array[ j + 1 ]){
                swap++;
                std::string temp = array[ j ];
                array[ j ] = array[ j + 1 ];
                array[ j + 1 ] = temp;
            }
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

    bubbleSort( array, size );

    std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i ++){
        std::cout << array[ i ] << std::endl;
    }


    return 0;
}