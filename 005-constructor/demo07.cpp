#if 0
如果某个函数的返回值是类A的对象时, 则函数返回时, A的复制构造函数被调用
#endif

#include <iostream>

using namespace std;

class A {
    public:
        int v;
        A(int n) {
            v = n;
        };
        A(const A &a) {
            v = a.v;
            cout << "Copy constructor called" << endl;
            // v = 100;
        }
};

A Func() {
    A b(4);
    return b;
}

int main(void) {
    // 只输出4, 编译器优化
    cout << Func().v << endl;
    return 0;
}