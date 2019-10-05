// Problem: Create a 2d dynamic array store string and display their values..

#include <iostream>

//fucntion declaration.
void input( std::string**, int, int );
void output( std::string**, int, int );

//main
int main(){

    std::string **array; 
    int rows, coloumns;

    std::cout << "Enter size of rows: ";
    std::cin >> rows;

    std::cout << "Enter size of colounm: ";
    std::cin >> coloumns;

    std::cin.ignore(1,'\n');

    array = new std::string* [ rows ];
    //loop for o to size - 1.
    for( int i = 0; i < rows; i++ )
        array[ i ] = new std::string[ coloumns ];

    input( array, rows, coloumns );
    output( array, rows, coloumns );

    delete[] array;

    return 0;
}

// fucntion defination of input.
void input( std::string **array , int row, int coloumn){
    //loop for o to size - 1.
    for( int i = 0; i < row; i++ ){
        std::cout << "Enter number for row " << i << " : ";
        //loop for o to colounm - 1.
        for( int j = 0; j < coloumn; j++ ){
            // std::cin >> array[ i ][ j ];
            getline( std::cin, array[ i ][ j ] );
        }
        std::cout << std::endl;
    }
}

// fucntion defination of input.
void output( std::string **array , int row, int coloumn){
    //loop for o to size - 1.
    for( int i = 0; i < row; i++ ){
        //loop for o to colounm - 1.
        for( int j = 0; j < coloumn; j++ ){
            std::cout << array[ i ][ j ] << " ";
        }
        std::cout << std::endl;
    }
}