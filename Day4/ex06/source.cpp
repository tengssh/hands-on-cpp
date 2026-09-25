#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto iter = v.begin();
    int len = v.size();
    for (auto i=0; i<len; i++)
    {
        if (i==1 || i==3)
        {
            std::cout << *iter << '\n';
        }
        iter++;
    }
}
