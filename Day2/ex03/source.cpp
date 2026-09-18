#include <iostream>

int main()
{
    char* c = new char;
    int* p = new int[3];
    *c = 'a';
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    std::cout << *c << ' ' << p[1] << '\n';
    delete c;
    delete p;
}
