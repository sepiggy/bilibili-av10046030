#if 0
如果某个函数有一个参数是类A的对象, 那么该函数被调用时, 类A的复制构造函数将被调用
#endif

#include <iostream>

using namespace std;

class A {
    public:
        A(){};
        A(A &a) {
            cout << "Copy constructor called" << endl;
        }
};

void Func(A a1) {}

int main(void) {
    A a2;
    Func(a2);
    return 0;
}