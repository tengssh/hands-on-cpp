#include <iostream>
#include <set>

int main()
{
    std::set<char> s = {'a', 'b', 'c'};
    auto it = s.find('b');
    if (it != s.end())
    {
	s.erase('b');
    }
    for (const auto& el : s)
    {
        std::cout << el << '\n';
    }
}
