#include "Stack.h"


int main(){

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    //std::cout << s.peek() << std::endl;
    //std::cout << s.getCount() << std::endl;
    //std::cout << s.pop() << std::endl;
    //std::cout << s.pop() << std::endl;
    //std::cout << s.pop() << std::endl;
    //s.pop();
    //std::cout << std::endl;
    std::cout << "Stack Count: " << s.getCount() << std::endl;
    s.destroyStack();
     std::cout << "Stack Count: " << s.getCount() << std::endl;
    return 0;
}
