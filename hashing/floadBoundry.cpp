#include <iostream>


int floadBoundry( int num ){
    int n1 = 0, n2 = 0, n3 = 0, index = 0;
    int revseNum1 = 0, revseNum3 = 0, r = 0;

    if( num >= 123456789 ){
        n1 = num % 1000;
        num = num / 1000;
        n2 = num % 1000;
        n3 = num / 1000;

    while(n1 != 0){
        r = n1 % 10;
        revseNum1 = revseNum1 * 10 + r;
        n1 = n1 / 10;
    }

    r = 0;

    while(n3 != 0){

        r = n3 % 10;
        revseNum3 = revseNum3 * 10 + r;
        n3 = n3 / 10;
    }

        n1 = n1 + n2 + n3;
        n1 = n1 % 1000;

    }

    index = revseNum1 + n2 + revseNum3;
    index = index % 1000;

    return index;
}


int main(){
    int number = 0;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;


    std::cout << "index number: " << floadBoundry( number ) << std::endl;

    return 0;
}
