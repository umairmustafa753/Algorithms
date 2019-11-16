#include <iostream>

int k = 1000;

int ModuloDivisionMethod( int key, int tableSize ){
    return ( key % tableSize );
}

int main(){

    int N = 307;

    int key = 6763;

    key = ModuloDivisionMethod( key, N );

    std::cout << "hashTable: " <<  key << std::endl;

    return 0;
}