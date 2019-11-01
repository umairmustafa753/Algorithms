//problem: to find the number in an array. Given data are array, size of array and key or number that we have to find using binary search.
//Note: it will find number or key id number are in asending order. 

#include <iostream>

int binarySearch( int array[], int sizeOfArray, int key  ){
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

int main(){

    int array[5] = {1,2,3,4,5};
    int sizeOfArray = 5;
    int key = 4;

    int ans = binarySearch( array, sizeOfArray, key );

    std::cout << ans << std::endl;

    return 0;
}