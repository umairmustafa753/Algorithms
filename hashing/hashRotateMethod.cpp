#include <iostream>

int hashRotateMethod( int key ){
    
    int value = key % 10;

    key = key / 10;

    while( key < value ){
        value = value * 10;
    }
    key = key + value;

    return  key;
}

int main(){

    int key = 4353;

    key = hashRotateMethod( key );

    std::cout << "hashTable: " <<  key << std::endl;

    return 0;
}