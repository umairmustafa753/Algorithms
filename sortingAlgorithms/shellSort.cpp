#include <iostream>
#include <string> 

int shellSort( std::string array[], int n ){
    int swap = 0, comparision = 0, steps = 0;

    for( int gap = n / 2; gap > 0; gap /= 2 ){
        for( int out = gap; out < n; out += 1){
            std::string temp = array[ out ];

            int in;
            comparision++;
            for( in = out; in >= gap  && array[ in - gap ] > temp; in = in - gap ){
                swap++;
                array[ in ] = array[ in - gap ];
            }
            array[ in ] = temp;
        }
    }

    steps = swap + comparision;

    std::cout << "\n\nNumber of comaprisons and swaps for this algorithm is: " << steps << std::endl;

    return 0;
}


int main(){

    int size = 10;
    
    std::string array[ size ];

    for( int i = 0; i < size; i ++){
        std::cout << "Enter element " << i + 1 << ": ";
        getline ( std::cin, array[ i ] ); 
    }

    shellSort( array, size );

    std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i ++){
        std::cout << array[ i ] << std::endl;
    }


    return 0;
}