// Problem: Create a 2d dynamic array store integers and display their values..

#include <iostream>

//fucntion declaration.
void input( int** , int, int );
void output( int**, int, int );

//main
int main(){

    int **array, rows, coloumns;

    std::cout << "Enter size of rows: ";
    std::cin >> rows;

    std::cout << "Enter size of colounm: ";
    std::cin >> coloumns;

    array = new int* [ rows ];
    //loop for o to size - 1.
    for( int i = 0; i < rows; i++ )
        array[ i ] = new int[ coloumns ];

    input( array, rows, coloumns );
    output( array, rows, coloumns );

    delete[] array;

    return 0;
}

// fucntion defination of input.
void input( int **array , int row, int coloumn){
    //loop for o to size - 1.
    for( int i = 0; i < row; i++ ){
        std::cout << "Enter number for row " << i << " : ";
        //loop for o to colounm - 1.
        for( int j = 0; j < coloumn; j++ ){
            std::cin >> array[ i ][ j ];
        }
        std::cout << std::endl;
    }
}

// fucntion defination of input.
void output( int **array , int row, int coloumn){
    //loop for o to size - 1.
    for( int i = 0; i < row; i++ ){
        //loop for o to colounm - 1.
        for( int j = 0; j < coloumn; j++ ){
            std::cout << array[ i ][ j ] << " ";
        }
        std::cout << std::endl;
    }
}