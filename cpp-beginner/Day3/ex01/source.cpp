#include <iostream>

class OP
{
    private:
        int i;
        double d;
    public:
	OP(int _i, double _d) : i{_i}, d{_d} {}
        OP& operator-=(const OP& rhs){
            i -= rhs.i;
            d -= rhs.d;
            return *this;
        }
        friend OP operator-(OP lhs, const OP& rhs){
            lhs -= rhs;
            return lhs;
        }
        void printall()
        {
            std::cout << "The values are: " << i << " and " << d << '\n';
        }
};

int main(){
    OP o1{1, 1.1};
    OP o2{3, 3.3};
    OP o3 = o1 - o2;
    o3.printall();
}

