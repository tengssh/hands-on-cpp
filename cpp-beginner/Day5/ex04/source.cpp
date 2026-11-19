#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream fsw {"myfile.txt", std::ios::out};
    fsw << "Line1 ";
    fsw << "2 ";
    fsw << "3.14\n";
    std::cout << fsw.tellg() << '\n';
    fsw.close();
    std::string str;
    int i;
    double d;
    std::fstream fsr {"myfile.txt", std::ios::in};
    std::cout << fsr.tellg() << '\n';
    fsr >> str >> i >> d;
    std::cout << "Read:\n" << str << '\n' << i << '\n' << d << '\n';
}
