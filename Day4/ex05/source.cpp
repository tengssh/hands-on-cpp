#include <iostream>
#include <string>
#include <array>

int main()
{
    std::array<std::string, 3> str = {"one", "two", "three"};
    for (const auto& el : str)
    {
        std::cout << el << '\n';
    }
}
