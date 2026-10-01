#include <iostream>
#include <memory>

int main()
{
    // C++14
    int i = 0b00101010;
    char c = 0b00110000;
    int n = 12'345'678;
    std::cout << i << " " << c << " " << n << '\n';
    auto f_lambda = [](auto v){ return v%2==0; };
    std::cout << f_lambda(1) << " " << f_lambda(2) << '\n';
    std::unique_ptr<int> up = std::make_unique<int>(101);
    std::cout << *up << '\n';
}
