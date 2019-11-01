#include <iostream>
#include <string> 

void insertionSort( std::string array[], int n){
    int swap = 0, comparision = 0, steps = 0;

    for( int i = 0; i < n; i ++ ){
        std::string temp = array[ i ];
        int j = i;
        comparision++;
        while( j > 0 && temp <= array[ j - 1 ] ){
            swap++;
            array[ j ] = array[ j - 1 ];
            j = j - 1;
        }
        array[ j ] = temp;
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

    insertionSort( array, size );

     std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i ++ ){
        std::cout << array[ i ] << std::endl;
    }


    return 0;
}