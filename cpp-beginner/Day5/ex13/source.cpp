#include <iostream>
#include <vector>
#include <any>
#include <variant>

namespace A
{
    std::any a = 1;
    namespace B
    {
        int b = 2;
    }
}

namespace A::B::C
{
    int c = 3;
}

int main()
{
    // C++17
    int v[] = {std::any_cast<int>(A::a), A::B::b, A::B::C::c};
    auto [one, two, three] = v;
    auto& [r1, r2, r3] = v;
    for (const auto& el : v)
    {
        std::cout << el << '\n';
    }
    std::cout << one << " " << r1 << '\n';
    std::cout << two << " " << r2 << '\n';
    std::cout << three << " " << r3 << '\n';
    one = 100;
    r1 = 0;
    for (const auto& el : v)
    {
        std::cout << el << '\n';
    }

    std::variant<int, char, double> a{100};
    std::cout << std::get<0>(a) << '\n';
    std::cout << std::get<int>(a) << '\n';
    a = 'a';
    std::cout << std::get<char>(a) << '\n';
    a = 3.14;
    std::cout << std::get<double>(a) << '\n';
}
