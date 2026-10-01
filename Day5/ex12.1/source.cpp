#include <iostream>
#include <memory>

class Person
{
    private:
        int age;
    public:
        Person(int _age) : age{_age}{}
        virtual void call() = 0;
        virtual ~Person(){}
        int get_age() const
        {
            return age;
        }
};

class Teacher : public Person
{
    public:
        Teacher(int _age) : Person{_age} {}
        void call() override
        {
            std::cout << "Teacher " << get_age() << '\n';
        }
};

class Student : public Person
{
    public:
        Student(int _age) : Person(_age) {}
        void call() override
        {
            std::cout << "Student " << get_age() << '\n';
        }
};

int main()
{
    // Polymorphism
    std::unique_ptr<Person> up1 = std::make_unique<Teacher>(30);
    std::unique_ptr<Person> up2 = std::make_unique<Teacher>(15);
    up1->call();
    up2->call();
}
