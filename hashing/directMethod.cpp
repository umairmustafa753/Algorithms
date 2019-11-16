#include <iostream>

int hashDirectMethod( int key ){
    return key;
}

int main(){

    int key = 1234;

    key = hashDirectMethod( key );

    std::cout << "hashTable: " <<  key << std::endl;

    return 0;
}