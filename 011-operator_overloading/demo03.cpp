#if 0
运算符重载为友元函数
#endif

#include <iostream>

using namespace std;

class Complex {
    double real, imag;

    public:
        Complex(double r, double i):real(r), imag(r){};
        Complex operator+(double r);
        friend Complex operator+(double r, const Complex &c);
};

Complex Complex::operator+(double r) {
    return Complex(real+r, imag);
}

Complex operator+(double r, const Complex &c) {
    return Complex(c.real+r, c.imag);
}

int main(void) {
    Complex c(5, 0);
    c + 5;
    5 + c;

    return 0;
}