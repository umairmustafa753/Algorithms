#include <iostream>

int squentailSearch( int array[], int sizeOfArray, int key  ){
    int index = 0;
    while( index < sizeOfArray && array[ index ] != key){
        index++;
    }
    if( array[ index ] != key ){
        return - 1;
    }

    return index;
}

int main(){

    int array[5] = {9,4,3,6,5};
    int sizeOfArray = 5;
    int key = 4;

    int ans = squentailSearch( array, sizeOfArray, key );

    std::cout << ans << std::endl;

    return 0;
}