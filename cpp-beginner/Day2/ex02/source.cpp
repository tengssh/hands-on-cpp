#include <iostream>

int main()
{
    int a = 1;
    double* b = new double;
    *b = 2;
    std::cout << a << ' ' << *b << '\n';
    delete b;
}
