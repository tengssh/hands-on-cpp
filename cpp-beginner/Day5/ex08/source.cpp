#include <iostream>

int main()
{
    constexpr int i = 1;
    constexpr int j = 2; // error without constexpr
    constexpr int k = i + j;
    std::cout << i << " " << j << " " << k << '\n';
}
