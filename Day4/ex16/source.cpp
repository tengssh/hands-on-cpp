#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

int main()
{
    std::vector<int> v = {1, 1, 2, 2, 2, 3, 3, 3, 4, 5, 6, 6};
    for (const int target : {1, 2, 3, 4, 5, 6})
    {
        const int n = std::count(v.cbegin(), v.cend(), target);
        std::cout << target << " has " << n << '\n';
    }
}
