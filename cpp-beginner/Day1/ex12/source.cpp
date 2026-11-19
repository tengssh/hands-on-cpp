#include <iostream>

int main()
{
    double a = 0;
    double* b = &a;

    std::cout << a << ' ' << *b;
}
