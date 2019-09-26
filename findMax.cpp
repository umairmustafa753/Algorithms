//problem: to find the largest number in the array. 


#include <iostream>

int largestNumber( int array[], int sizeOfArray  ){
    int max = array[0];
    int index = 0;
    while( array[ index ] != sizeOfArray ){
        if( array[ index ] > max )
            max = array[ index ];
        index++;
    }

    return max;
}

int main(){

    int array[5] = {10,4,11,3,5};
    int sizeOfArray = 5;

    int ans = largestNumber( array, sizeOfArray);

    std::cout << ans << std::endl;

    return 0;
}