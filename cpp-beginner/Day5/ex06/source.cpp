#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3};
    for (const auto el : v)
    {
        std::cout << el << '\n';
    }
}
