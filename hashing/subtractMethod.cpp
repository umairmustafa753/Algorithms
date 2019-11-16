#include <iostream>

int k = 1000;

int hashSubtractMethod( int key ){
    return ( key - k );
}

int main(){

    int key = 6763;

    key = hashSubtractMethod( key );

    std::cout << "hashTable: " <<  key << std::endl;

    return 0;
}