#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Employees
{
    private:
        std::string name;
        int age;
        int salary;
    public:
        Employees(const std::string& _name, int _age, int _salary) : name{_name}, age{_age}, salary{_salary}
        {}

        std::string get_name() const
        {
            return name;
        }
        int get_age() const
        {
            return age;
        }
};

int main(int argc, char* argv[])
{
    int age = 30;
    if (argc==2)
    {
        std::cout << argv[1] << '\n';
        age = std::atoi(argv[1]);
    }
    std::vector<Employees> empl = {Employees("Alice", 30, 3000), Employees("Bob", 25, 2500), Employees("Charlie", 33, 33000)};

    auto whose_age = [&empl](int age) {return std::find_if(empl.begin(), empl.end(), [&age](const Employees& e){ return e.get_age() == age; }); };

    auto it = whose_age(age);
    if (it != empl.end())
    {
        std::cout << it->get_name() << " is " << age << "!\n";
    }
    else
    {
        std::cout << "None!\n";
    }
}
