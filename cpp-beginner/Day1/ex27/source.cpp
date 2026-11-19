#include <iostream>
#include <string>

void custommessage(const std::string& s);

int main()
{
    std::string s = "abc";
    custommessage(s);
}

void custommessage(const std::string& s)
{
    std::cout << "cm: " << s << '\n';
}
