#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> m = {{1, "abc"}, {2, "def"}};
    m[3] = "ghi";
    auto it = m.find(2);
    if (it != m.end())
    {
        m.erase(2);
    }
    for (const auto& el : m)
    {
        std::cout << el.first << ":" << el.second << '\n';
    }
}
