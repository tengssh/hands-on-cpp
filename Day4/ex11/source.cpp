#include <iostream>
#include <set>

int main()
{
    std::set<int> s = {1, 2, 3, 4, 5};
    std::cout << "size: " << s.size() << '\n';
    s.erase(1);
    std::cout << "size: " << s.size() << '\n';
    std::cout << "empty? " << s.empty() << '\n';
    s.clear();
    std::cout << "size: " << s.size() << '\n';
    std::cout << "empty? " << s.empty() << '\n';
}
