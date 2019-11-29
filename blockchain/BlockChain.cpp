#include "BlockChain.h"
#include<iostream>

BlockChain::BlockChain(): genesisBlock(new Block()), counter(0){ genesisBlock = NULL;}
BlockChain::~BlockChain(){
    Block* temp = genesisBlock;
    Block** blocks = new Block*[counter];
    for( int i = 0; i < counter; ++i ){
        blocks[ i ] = temp;
        temp = temp->next;
    }
    for( int i = 0; i < counter; ++i){
        delete blocks[i];
        blocks[i] = NULL;
    }
    delete[] blocks;

    genesisBlock =  NULL;
    current = NULL;
    temp = NULL;
}

std::string BlockChain::calculateHash(std::string data, std::string timeStamp, std::string previousHash){

    int d = atoi (data.c_str());
    int t = atoi (timeStamp.c_str());
    int p = atoi (previousHash.c_str());
    int h = (d+t+p);
    std::stringstream ss;
    ss<<h;
    std::string s;
    ss>>s;
    return sha256(s);

}

std::string BlockChain::getTimeStamp(){
    time_t now = time(0);
    char* dt = ctime(&now);
    return dt;
}

void BlockChain::addBlock(std::string data){
    if(genesisBlock == NULL){
       Block *tempGenesisBlock = new Block();
       tempGenesisBlock->data = data;
       tempGenesisBlock->timeStamp = getTimeStamp();
       tempGenesisBlock->prevHash = "0";
       tempGenesisBlock->Hash = calculateHash( data, tempGenesisBlock->timeStamp, tempGenesisBlock->prevHash );
       tempGenesisBlock->next = NULL;
       genesisBlock = tempGenesisBlock;
    }
    else{
        Block *temp = new Block();
        current = genesisBlock;
        while( current->next != NULL ){
            current = current->next;
        }
        temp->data = data;
        temp->timeStamp = getTimeStamp();
        temp->prevHash = current->Hash;
        temp->Hash = calculateHash( data, temp->timeStamp, temp->prevHash );
        temp->next = NULL;
        current->next = temp;
    }
    ++counter;
}

void BlockChain::printChain(){
    int i = 0;
    Block *temp = genesisBlock;
    while(temp != NULL){
        std::cout << "Block: " << ++i << std::endl << "Data: " << temp->data << std::endl;
        std::cout << "timeStamp: " << temp->timeStamp;
        std::cout << "hash: " << temp->Hash << std::endl;
        std::cout << "previous hash: " << temp->prevHash << std::endl;
        std::cout << std::endl;
        temp = temp->next;
    }
}

