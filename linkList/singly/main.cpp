#include <iostream>
#include "LinkList.h"
#include "Node.h"
int main(){

    LinkList l1;

    l1.insertValue("umair");
    l1.insertValue("mustafa");
    l1.insertValue("Anthony");
    l1.print();
    //l1.searchValue("mustafa");
    if( l1.deleteValue("umair") == true )
        std::cout << "value is deleted" << std::endl;
    else
        std::cout << "value is not deleted" << std::endl;
    l1.print();

    return 0;
}

