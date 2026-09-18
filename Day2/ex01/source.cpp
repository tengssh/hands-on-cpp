#include <iostream>

int main()
{
    int* p = new int;
    *p = 1;
    std::cout << *p << '\n'; 
    delete p;
}
