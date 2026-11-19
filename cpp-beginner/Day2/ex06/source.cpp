#include <iostream>
#include <string>

int main()
{
    std::string s = "abcde";

    try
    {
        std::cout << s.at(0) << s.at(4) << '\n';
        std::cout << s.at(10) << '\n';
    }
    catch (std::out_of_range& e)
    {
        std::cout << "out of range\n";
    }
}
