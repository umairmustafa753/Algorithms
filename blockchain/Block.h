#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>

struct Block{
    std::string data;
    std::string Hash;
    std::string prevHash;
    std::string timeStamp;
    Block *next;

    Block();
    ~Block();
};
#endif // BLOCK_H
