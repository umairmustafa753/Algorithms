#include <iostream>

int hashModulesMethod( int key, int tableSize ){
    int homeAddress = key % tableSize;
    return homeAddress;
}

int quadraticProb( int homeAddress , int tableSize, int i ){
    homeAddress = ( homeAddress + ( i * i ) ) % tableSize;
    return homeAddress;
}


int main(){
    int tableSize, key;


    std::cout << "Enter the size of hash table: ";
    std::cin >> tableSize;

    int hashTable[tableSize] = {0};

    std::cout << "Enter a key: ";

    for( int i = 0 ; i < tableSize; i++){

    std::cin >> key;

    int index = hashModulesMethod( key, tableSize );

    while( hashTable[ index ] != 0  ){
            int i = 1;
            index = quadraticProb( index, tableSize, i );
            i++;
    }

    while( hashTable[ index ] == 0 ){
        hashTable[ index ] = key;
    }
    }

    std:: cout << "Element in the array: ";

    for( int i = 0; i < tableSize; i++){
        std::cout << "\nElement at position: " << i << "\t" << hashTable[i];
    }
}

