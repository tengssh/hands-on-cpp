#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    for (const auto& el : v)
    {
        std::cout << el << '\n';
    }
}
