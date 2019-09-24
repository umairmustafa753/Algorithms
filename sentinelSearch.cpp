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

    int ans = squentailSearch( array, sizeOfArray, key );

    std::cout << ans << std::endl;

    return 0;
}