#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, int> m = {{"abc", 123}};
    m.insert({"def", 456});
    m["ghi"] = 789;
    for (const auto& el : m)
    {
        std::cout << el.first << ":" << el.second << '\n';
    }
}
