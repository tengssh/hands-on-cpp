#include <iostream>

int main()
{
    double mydouble = 0;
    double* myreference = &mydouble;

    *myreference = 1;
    std::cout << mydouble << ' ' << *myreference;
    mydouble = 2;
    std::cout << mydouble << ' ' << *myreference;
}
