#include <iostream>

int hashModulesMethod( int key, int tableSize ){
    int homeAddress = key % tableSize;
    return homeAddress;
}

int linearProb( int homeAddress , int tableSize ){
    homeAddress = ( homeAddress + 1 ) % tableSize;
    return homeAddress;
}


int main(){
    int tableSize, key;


    std::cout << "Enter the size of hash table";
    std::cin >> tableSize;

    int hashTable[tableSize] = {0};

    std::cout << "Enter a key";

    for( int i = 0 ; i < tableSize; i++){

    std::cin >> key;

    int index = hashModulesMethod( key, tableSize );

    while( hashTable[ index ] != 0  ){
            index = linearProb( index, tableSize );
    }

    while( hashTable[ index ] == 0 ){
        hashTable[ index ] = key;
    }
    }

    std:: cout << "Element in the array: ";

    for( int i = 0; i < tableSize; i++){
        std::cout << "\nElement at position" << i << "\t" << hashTable[i];
    }
}
