#include <iostream>
#include <set>

int main()
{
    std::set<int> s = {1, 3, 2};
    for (const auto& el : s)
    {
        std::cout << el << '\n';
    }
}
