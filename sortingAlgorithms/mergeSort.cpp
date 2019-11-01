#include <iostream>
#include <string> 

//global Variable.
int swap = 0, comparision = 0, steps = 0;

void merge( std::string array[], int low, int high, int mid )
{
	int i = 0, j = 0, k = 0;
    std::string temp[ high-low+1 ];
	i = low;
	k = 0;
	j = mid + 1;

	while( i <= mid && j <= high ){
        comparision++;
		if( array[ i ] < array[ j ] ){
            swap++;
			temp[ k ] = array[ i ];
			k++;
			i++;
		}
		else{
            swap++;
			temp[ k ] = array[ j ];
			k++;
			j++;
		}
	}

	while (i <= mid ){
        swap++;
		temp[ k ] = array[ i ];
		k++;
		i++;
	}
	while (j <= high ){
        swap++;
		temp[ k ] = array[ j ];
		k++;
		j++;
	}
 
	for (i = low; i <= high; i++){
        swap++;
		array[ i ] = temp[ i - low ];
	}
}

void mergeSort( std::string array[], int low, int high )
{
	int mid;
	if ( low < high ){
		mid = ( low+high ) / 2;
		mergeSort( array, low, mid );
		mergeSort( array, mid+1, high );
		merge( array, low, high, mid );
	}
}


int main(){

    int size = 10;
    
    std::string array[ size ];

    for( int i = 0; i < size; i ++){
        std::cout << "Enter element " << i + 1 << ": ";
        getline ( std::cin, array[ i ] ); 
    }

    mergeSort( array, 0, size - 1 );

    std::cout << "Sorted array: " << std::endl;

    for( int i = 0; i < size; i ++){
        std::cout << array[ i ] << std::endl;
    }

    steps = swap + comparision;

    std::cout << "\n\nNumber of comaprisons and swaps for this algorithm is: " << steps << std::endl;

    return 0;
}