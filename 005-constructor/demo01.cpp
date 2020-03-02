#if 0
如定义类时没写构造函数, 则编译器生成一个默认的`无参数`的构造函数
#endif

#include <iostream>

using namespace std;

class Complex {
    private:
            double real, imag;
    public:
            Complex(double r, double i = 0);
            void output();
};

Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

void Complex::output() {
    cout << "real = " << real << "; imag = " << imag << endl;
}

int main(void) {

    Complex c1(12.34, 56.78);
    c1.output();

    Complex *pc = new Complex(12.34, 56.78);
    pc->output();

    Complex &rc = c1;
    rc.output();

    return 0;
}