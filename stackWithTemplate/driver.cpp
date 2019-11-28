#include "StackTemplate.cpp"

int main(){

    Stack<int> intstack;
    Stack<char> charstack;
    int x = 1, y = 2;
    char a = 'X', b = 'Y';

    intstack.push(x);
    intstack.push(y);
    charstack.push(a);
    charstack.push(b);

    std::cout << "\n" << intstack.size();
    std::cout << "\n" << intstack.peek();
    std::cout << "\n" << intstack.pop();
    std::cout << "\n" << intstack.pop();
    std::cout << "\n" << intstack.pop();

    std::cout << "\n" << charstack.peek();
    std::cout << "\n" << charstack.size();

    return 0;
}
