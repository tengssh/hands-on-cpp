#include <iostream>
#include <map>

int main()
{
    std::map<char, int> m;
    m['a'] = 1;
    m.insert({'b', 2});
    m['c'] = 3;
    m.erase('b');
    for (const auto& el : m)
    {
        std::cout << el.first << ":" << el.second << '\n';
    }
}
