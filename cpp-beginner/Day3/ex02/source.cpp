#include <iostream>
#include <string>

class Person
{
    private:
        std::string name;
    public:
        Person(std::string _name) : name{_name}
        {
            std::cout << "construct for person: " << name << '\n';
        }

        std::string getname()
        {
            return name;
        }
};

class Student : public Person
{
    private:
        int semester;
    public:
        Student(std::string _name, int _semester) : Person{_name}, semester{_semester}
        {
            std::cout << "construct for student: " << _name << '\n';
        }

        int getsemester()
        {
            return semester;
        }
};

int main()
{
    std::string temp;
    int i;
    Student s1{"Bob", 3};
    temp = s1.getname();
    std::cout << temp << '\n';
    i = s1.getsemester();
    std::cout << i << '\n';
}

