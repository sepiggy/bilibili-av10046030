#if 0
抽象类
#endif

#include <iostream>

using namespace std;

class A {
    public:
        virtual void f() = 0;
        void g() { this->f(); }
        A() {}
};

class B : public A {
    public:
        void f() { cout << "B: f()" << endl; }
};

int main(void) {
    B b;
    b.g();
    return 0;
}