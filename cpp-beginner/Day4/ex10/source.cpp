#include <iostream>
#include <set>

int main()
{
    std::set<double> s = {1.1, 2.2, 3.3};
    s.insert(4.4);
    s.insert(5.5);
    s.erase(1.1);
    for (const auto& el : s)
    {
        std::cout << el << '\n';
    }
}
