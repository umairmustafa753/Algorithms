#include <iostream>

int hashMidSquare( int key ){
    int square = key * key;

    int temp = 0;

    if( square > 999 && square < 1000 ){
        temp = square / 10;
        temp = temp % 100;
    }
    else if( square > 9999 && square < 10000 ){
        square = square / 10;
        temp = temp % 1000;
    }
    else if( square > 99999 ){
        square = square / 1000;
        temp = temp % 1000;
    } 

    return temp;
}

int main(){

    int key = 123;

    key = hashMidSquare( key );

    std::cout << "hashTable: " <<  key << std::endl;

    return 0;
}