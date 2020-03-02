#if 0
如果定义了自己的复制构造函数, 则默认的复制构造函数不存在
#endif

#include <iostream>

using namespace std;

class Complex {
    public:
        double real, imag;
    Complex(){}
    Complex(const Complex &c) {
        real= c.real;
        imag = c.imag;
        cout << "Copy Constructor called." << endl;
    }
};

int main(void) {
    Complex c1;
    Complex c2(c1);
    return 0;
}