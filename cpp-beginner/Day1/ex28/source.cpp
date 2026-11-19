#include <iostream>

int division(int a, int b);
double division(double a, double b);

int main()
{
    std::cout << division(9, 2) << '\n';
    std::cout << division(9., 2.) << '\n';
}

int division(int a, int b)
{
    return a / b;
}

double division(double a, double b)
{
    return a / b;
}
