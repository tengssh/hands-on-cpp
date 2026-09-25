#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Employee
{
    private:
        std::string name;
        int age;
    public:
        Employee(std::string _name, int _age) : name{_name}, age{_age}
        {}
        std::string get_name() const
        {
            return name;
        }
        friend bool operator<(const Employee& lhs, const Employee& rhs) noexcept {
            return lhs.age < rhs.age;
        }
};

int main()
{
    std::vector<Employee> E{{"Alice", 30}, {"Bob", 25}};
    E.push_back(Employee{"Cathy", 31});
    for (const auto& e : E)
    {
        std::cout << e.get_name() << '\n';
    }
    std::sort(E.begin(), E.end());
    for (const auto& e : E)
    {
        std::cout << e.get_name() << '\n';
    }
}
