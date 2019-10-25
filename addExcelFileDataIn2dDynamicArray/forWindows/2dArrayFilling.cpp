//Problem: Given an input file, write a program that will read the file in a dynamic array of employee. Find a record of employee using the Employee Name column, from the defined multidimensional dynamic array using each search algorithm discussed in the lab. Your program should identify whether a record is present in the defined dynamic array or not.

#include <iostream>
#include <fstream>
#include <sstream>

//function declaration.
void fillArr( std::string **arr, int i, int cols, std::string data );
int countcols( std::string data );
int filling( int rows, int cols, std::string **arr );
void output( std::string **arr, int rows, int colounms);

//main
int main(){
    
    int rows = 0, cols = 0;
    std::string **arr;

    rows = filling( rows, cols, arr );
    cols = filling( rows, cols, arr );

    arr = new std::string* [ rows ];

    for( int i = 0; i < rows; i++ )
        arr[ i ] = new std::string[ cols ];

     // calling function to read data from file and store it on array.
    filling( rows, cols, arr );

    output( arr, rows, cols );

    delete[] arr;

    return 0;
}

//function defination.
int filling( int rows, int cols, std::string **arr ){
    std::ifstream fileData;
    std:: string data;
    int i = 0, j = 0;

    fileData.open( "HRDataset.csv" );

    if( fileData.is_open() ){
        if( rows == 0 ){
            while( getline( fileData, data ) )
                rows++;
        }
        else if( cols == 0 ){
            while( getline( fileData, data ) )
                cols = countcols( data );
            return cols;
        }
        else{
            while( getline( fileData, data) ){
                fillArr( arr, i, cols, data );
                i++;
            }
        }
    }
    else
        std::cout << "file is not open" << std::endl;

    fileData.close();

    return rows;
}

void fillArr( std::string **arr, int i, int cols, std::string data ){
    std::stringstream strStream( data );
    for( int j = 0; j < cols; j++ ){
        std::getline( strStream, data, ',' );
        arr[ i ][ j ] = data;
    }
}

int countcols( std::string data ){
    int col = 0; 
	std::stringstream strStream( data );
    while(!strStream.eof())
	{
		std::getline( strStream, data, ',' );
        col++;
	}
    return col;
}

void output( std::string **arr, int rows, int colounms){
    int j = 0;
    for( int i = 0; i < rows; i++ ){
        for( int j = 0; j < colounms; j++ ){
            std::cout << arr[ i ][ j ] << " "; 
        }
        std::cout << std::endl;
    }

}