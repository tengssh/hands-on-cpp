#include <iostream>

int main()
{
    int i = 0;
    auto hello = []() { std::cout << "Hello\n"; };
    auto if_zero = [&i]() { return i==0; };
    auto if_even = [](int el) { return el%2==0; };
    hello();
    std::cout << if_zero() << '\n';
    std::cout << if_even(1) << '\n';
    std::cout << if_even(2) << '\n';
}
