#include <iostream>
#include "BlockChain.h"

int main(){

    BlockChain b;

    b.addBlock("This is block 1");
    b.addBlock("This is block 2");
    b.addBlock("This is block 3");

    b.printChain();

    return 0;
}
