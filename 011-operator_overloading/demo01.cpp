#if 0
运算符重载
#endif

#include <iostream>

using namespace std;

class Complex {
    public:
        Complex(double r=0.0, double i=0.0) {
            real = r;
            imaginary = i;
        }
        double real;
        double imaginary;
        Complex operator-(const Complex &);
};

//! 重载为普通函数
Complex operator+(const Complex &a, const Complex &b ) {
    return Complex(a.real + b.real, a.imaginary + b.imaginary);
}

Complex Complex::operator-(const Complex &operand2) {
    return Complex(real-operand2.real, imaginary-operand2.imaginary);
}

int main(void) {
    Complex a(1,2), b(2,3), c;
    c = a + b;
    cout << "c.real=" << c.real << endl;
    cout << "c.imaginary=" << c.imaginary << endl;

    c = a - b;
    cout << "c.real=" << c.real << endl;
    cout << "c.imaginary=" << c.imaginary << endl;

    return 0;
}