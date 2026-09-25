#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 2, 3};
    for (const auto& el : v)
    {
        std::cout << el << '\n';
    }
    std::reverse(v.begin(), v.end());
    for (const auto& el : v)
    {
        std::cout << el << '\n';
    }
}
