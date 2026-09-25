#include <iostream>
#include <string>
#include <vector>
#include <memory>

class BaseClass
{
    public:
        virtual ~BaseClass() {};
        virtual void dowork() const = 0;
};

template <class T>
class MyClass : public BaseClass
{
    private:
        T val;
    public:
        MyClass(T _val) : val{_val}
        {}
        T getter() const;
        void dowork() const override;
};

template <class T>
T MyClass<T>::getter() const
{
    std::cout << val << '\n';
    return val;
}

template <class T>
void MyClass<T>::dowork() const
{
    getter();
}

int main()
{
    std::vector<std::unique_ptr<BaseClass>> v;
    v.push_back(std::make_unique<MyClass<int>>(10));
    v.push_back(std::make_unique<MyClass<double>>(3.14));
    v.push_back(std::make_unique<MyClass<char>>('a'));
    v.push_back(std::make_unique<MyClass<bool>>(true));
    v.push_back(std::make_unique<MyClass<std::string>>("one"));
    for (const auto& el : v)
    {
        el->dowork();
    }
}
