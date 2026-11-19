#include <iostream>
#include <fstream>

int main()
{
    std::fstream fs{"myfile.txt", std::ios::in};
    char c;
    while (fs >> std::noskipws >> c)
    {
        if (c == '\n')
        {
            std::cout << "\\n\n";
        }
        else
        {
            std::cout << c << '\n';
        }
    }
    fs.clear();
    fs.seekg(0);
    std::string temp;
    while (std::getline(fs, temp))
    {
        std::cout << temp << '\n';
    }
}
