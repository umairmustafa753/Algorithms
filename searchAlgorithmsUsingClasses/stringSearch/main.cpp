//Problem: Implement an abstract class Search with pure virtual function search(), publically inherit LinearSearch, SentinelSearch, ProbabilisticSearch and BinarySearch classes from the Search class.

#include "LinearSearch.h"
#include "SentinelSearch.h"
#include "ProbabilisticSearch.h"

int main(){ 
    //declarting and intializing array. 
    std::string array[5] = {"Umair","Ibrar","Hassan","Abubakar","Karar"};
    //declaring and intialzing variables.
    int sizeofArray = 5;
    std::string key = "Hassan";


    LinearSearch s1;
    std:: cout << "Linear Search: " << s1.search(array, sizeofArray, key) << std::endl;
    SentinelSearch s2;
    std:: cout << "Sentinel Search: " << s2.search(array, sizeofArray, key) << std::endl;
    ProbabilisticSearch s4;
    std:: cout << "ProbabilisticSearch Search: " << s4.search(array, sizeofArray, key) << std::endl;
    return 0;
}
