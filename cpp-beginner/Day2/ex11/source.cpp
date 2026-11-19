#include <iostream>

class MyClass
{
    public:
        MyClass(int argx) : x{argx}
        {}
		void setx(int argx);
		int getx() const;
    private:
        int x;
};

void MyClass::setx(int argx)
{
	x = argx;
}

int MyClass::getx() const
{
	return x;
}

int main()
{
    MyClass o{1};
    std::cout << o.getx() << '\n';
    o.setx(2);
    std::cout << o.getx() << '\n';
}
