#include <iostream>
#include <string>

class Person
{
    public:
        void set_name(const std::string& name);
	void print();
        Person(const std::string& _name, int _age);
	Person(const Person& rhs) : name{rhs.name}, age{rhs.age}
	{
            std::cout << "copy constructor\n";
	}
	Person& operator=(const Person& rhs);
        ~Person();
    private:
        std::string name;
	int age;
};

Person& Person::operator=(const Person& rhs)
{
    name = rhs.name;
    age = rhs.age;
    std::cout << "copy assignment operator\n";
    return *this;
}

Person::Person(const std::string& _name, int _age) : name{_name}, age{_age}
{
    std::cout << "constructor for " << name << '\n';
}

Person:: ~Person()
{
    std::cout << "destructor for " << name << '\n';
}

void Person::set_name(const std::string& _name)
{
    name = _name;
}

void Person::print()
{
    std::cout << name << ", " << age << '\n';
}

int main()
{
    Person p1{"abc", 10};
    std::cout << "===\n";
    Person p2{"cde", 20};
    std::cout << "===\n";
    Person p3 {p2};
    std::cout << "===\n";
    Person p4 = p1;
    std::cout << "===\n";
    p3 = p1;
    std::cout << "===\n";
    p3.print();
}
