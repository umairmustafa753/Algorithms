#include <iostream>
#include <fstream>
#include <sstream> 

//function declaration.
void createMatrix();
void getImageData( int **pgmImage, int **pgmImage2 );
void mergeImage( int **pgmImage1, int ** pgmImage2, int **merge );
void writeDataInfile( int **merge );

//main
int main(){

    //calling create matrix function.
    createMatrix();

    return 0;
}

//function defination.
void createMatrix(){

    int **pgmImage1;
    int **pgmImage2;


    //for rows.
    pgmImage1 = new int* [ 512 ];

    //for colounms.
    for( int i = 0; i < 512; i++ )
        pgmImage1[ i ] = new int[ 512 ];

    //for rows.
    pgmImage2 = new int* [ 512 ];

    //for colounms.
    for( int i = 0; i < 512; i++ )
        pgmImage2[ i ] = new int[ 512 ];

    getImageData( pgmImage1, pgmImage2 );

}

//function defination.
void getImageData( int **pgmImage1, int **pgmImage2 ){
    std::ifstream fileData;
    std::string strData;

    fileData.open( "img1.pgm" );

    if( fileData.is_open() ){

        for( int i = 0; i < 3; i++ )
            getline( fileData, strData );

        for( int i = 0; i < 512; i++ )
            for( int j = 0; j < 512; j++ )
                fileData >> pgmImage1[ i ][ j ];
    }
    else
      std::cout << "file is not open" << std::endl;

    fileData.close();

    fileData.open( "img2.pgm" );

    if( fileData.is_open() ){

    for( int i = 0; i < 3; i++ )
        getline( fileData, strData );

        for( int i = 0; i < 512; i++ )
            for( int j = 0; j < 512; j++ )
                 fileData >> pgmImage2[ i ][ j ];
    }
    else
        std::cout << "file is not open" << std::endl;

    fileData.close();

    int **merge;

    merge = new int* [ 512 ];

    for( int i = 0; i < 512; i++ )
        merge[ i ] = new int[ 512 ];

    mergeImage( pgmImage1, pgmImage2, merge  );

}

void mergeImage( int **pgmImage1, int ** pgmImage2, int **merge ){
    
    merge = new int* [ 512 ];

    for( int i = 0; i < 512; i++ )
        merge[ i ] = new int[ 512 ];

    for( int i = 0; i < 512; i++ ){
        for( int j = 0; j < 512; j++ ){
            merge[ i ][ j ] = pgmImage1[ i ][ j ] + pgmImage2[ i ][ j ];  
        }
    }

    //calling merge function.
    writeDataInfile( merge );

    
    //deleting dynamic array from file.
    delete[] pgmImage1;
    delete[] pgmImage2;
    delete[] merge;
}

//wrtting data on file
void writeDataInfile( int **merge ){
    int k = 0, l = 0, m = 0;
    std::ofstream file ( "merge.pgm" );
    if( file.is_open() ){
        file << "P2" << "\n";
        file << 512 << " " << 512 << "\n";
        file << 420 << "\n";
        for( int i = 0; i < 512; i++ ){
            for( int j = 0; j < 512; j++ ){
                file << merge [ i ][ j ] << " "; 
            }
            file << "\n";
        }
    }
    else
        std::cout << "file is not open." << std::endl;
}