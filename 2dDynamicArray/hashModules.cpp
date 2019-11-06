//Given an input file, write a program that will read the file in a dynamic array of employee.
//A. Create a hash table using modulo division method hashing technique discussed in lab. Use the employee name column as key. Calculate the home address for each employee name.
//B. Use any collision resolution technique for resolving the collision between values.

#include <iostream>
#include <fstream>
#include <sstream>

//function declaration.
void fillArr( std::string **arr, int i, int cols, std::string data );
int countcols( std::string data );
int filling( int rows, int cols, std::string **arr );
int hashModulesMethod( int key, int tableSize );
int quadraticProb( int homeAddress , int tableSize, int i );
int toAsccii( std::string value, int row, int cols );

//main
int main(){
    
    int rows = 0, cols = 0;
    std::string **arr;

    rows = filling( rows, cols, arr );
    cols = filling( rows, cols, arr );

    arr = new std::string* [ rows ];

    for( int i = 0; i < rows; i++ )
        arr[ i ] = new std::string[ cols ];

    filling( rows, cols, arr ); // calling function to read data from file and store it on array.

    
    int hashTable[ rows ];
    for( int i = 0; i < rows; i++ ){
        hashTable[ i ] = 0;
    }
    for( int i = 0; i < rows; i++ ){
        std::string val = arr[ i ][ 0 ];
        
        int key = toAsccii( val, rows, cols );
        
  

        int index = hashModulesMethod( key, rows );

        while( hashTable[ index ] != 0  ){
                int k = 1;
                index = quadraticProb( index, rows, k );
                k++;
        }
        while( hashTable[ index ] == 0 ){
            hashTable[ index ] = key;
        }
        
        
    }

    std:: cout << "Element in the array: " << std::endl;
    for( int i = 0; i < rows; i++ ){
        std::cout << "\nElement at position: " << i << "\t" << hashTable[ i ] << std::endl;
    }

    delete[] arr;

    return 0;
}

//function defination.
int filling( int rows, int cols, std::string **arr ){
    std::ifstream fileData;
    std:: string data;
    int i = 0, j = 0;

    fileData.open( "HRDataset_sorted.csv" );

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

int hashModulesMethod( int key, int tableSize ){
    int homeAddress = key % tableSize;
    return homeAddress;
}

int quadraticProb( int homeAddress , int tableSize, int i ){
    homeAddress = ( homeAddress + ( i * i ) ) % tableSize;
    return homeAddress;
}

int toAsccii( std::string value, int row, int cols ){
    int inNumber;
    for( int i = 0 ; i < row; i++){
    
        std::string inAlphabet = value;
        int j = 0;

        while (inAlphabet[j] != '\0')   // converting string into asccii.
        { 
            inNumber = inNumber + int(inAlphabet[j]);  
            j++; 
        } 
    }
    return inNumber;
}