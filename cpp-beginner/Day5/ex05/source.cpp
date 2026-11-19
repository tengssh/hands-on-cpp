#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main()
{
    auto i = 1;
    auto d = 2.2;
    auto b = true;
    auto s = "123";
    auto c = 'a';
    auto v = {1, 2, 3};
    auto p = std::make_pair(1, 2.2);
    std::cout << i << '\n';
    std::cout << d << '\n';
    std::cout << b << '\n';
    std::cout << s << '\n';
    std::cout << c << '\n';
    for (const auto el : v)
    {
        std::cout << el << '\n';
    }
    std::cout << p.first << " " << p.second << '\n';
}
