#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    if (a == 1 && b == 2) std::cout << "a1b2\n";
    else if (!(a > 0)) std::cout << "a<=0\n";
    else if (a != 1 || b != 2) std::cout << "not a1 or not b2\n";
}
