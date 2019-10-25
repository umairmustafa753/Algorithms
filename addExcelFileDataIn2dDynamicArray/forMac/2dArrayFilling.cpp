#include <iostream>
#include <array>
#include <fstream>

//function declaration.
void split( std::string **array, int rows, int colounms, std::string data );
void output( std::string **array, int rows, int colounms);

//main
int main(){

    std::string **array;
    std::string key, data;
    std::ifstream fileData;
    int rows, colounms;

    fileData.open( "HRDataset.csv" );


    if( fileData.is_open() ){
        while( getline( fileData, data ) )
            rows++;
    }
    else{
        std::cout << "file is not open";
    }

    fileData.close();

    colounms = rows;

    array = new std::string* [ rows ];

    for( int j = 0; j < colounms; j++ )
        array[ j ] = new std::string[ colounms ];

    fileData.open( "HRDataset.csv" );

    int j = 0, i = 0;

    if( fileData.is_open() ){
        while( getline( fileData, data) ){
            split( array, i, j, data );
            i++;
        }
    }

    fileData.close();

    output( array, rows, colounms );

    delete[] array;


    return 0;
}

//function defination.
void split( std::string **array, int i, int j, std::string data ){
    std::string singleInfo = "";

    for( int k = 0; k < data.size(); k++ ){
        if (data[ k ] == ',') {
            array[ i ][ j ] = singleInfo;
            singleInfo = "";
            j++;
        }
        else{
            singleInfo = singleInfo + data[ k ];
        }
    }
    array[ i ][ j ] = singleInfo;
}

void output( std::string **array, int rows, int colounms){
    int j = 0;
    for( int i = 0; i < rows; i++ ){
        while( array[i][j] != "" ){
            std::cout << array[ i ][ j ] << " " << std::endl;
            j++;
        }
        j = 0;
    }

}