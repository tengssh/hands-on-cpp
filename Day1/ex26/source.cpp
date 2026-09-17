#include <iostream>

int multiplication(int a, int b);

int main()
{
    int a = 1;
    int b = 2;
    std::cout << multiplication(a, b);
}

int multiplication(int a, int b)
{
    return a * b;
}
