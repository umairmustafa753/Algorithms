#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include "Block.h"
#include "sha256.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

class BlockChain{
private:
    Block *genesisBlock;
    Block *current;
    int counter;
public:
    BlockChain();
    ~BlockChain();

    void addBlock(std::string value);
    std::string getTimeStamp();
    std::string calculateHash(std::string data, std::string timeStamp, std::string previousHash);
    void printChain();
};
#endif // BLOCKCHAIN_H
