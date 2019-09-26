//Problem. to shift the value towards started index.

#include <iostream>

int squentailSearch( int array[], int sizeOfArray, int key  ){
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

int main(){

    int array[5] = {10,4,2,3,5};
    int sizeOfArray = 5;
    int key = 4;
    int index = 0;

    index = squentailSearch( array, sizeOfArray, key );
    //shifting value towards started index.
    if( index != 0 ){
        int temp = array[ index - 1 ];
        array[ index - 1 ] = array[ index ];
        array[ index ] = temp ;
    }

    std::cout << "shifted index is: " << index << std::endl;

    for( int i = 0; i < sizeOfArray; i++ )
        std::cout << array[ i ] << ",";
    std:: cout << std:: endl;

    return 0;
}