#if 0
如果没有定义复制构造函数, 那么编译器生成`默认复制构造函数`. 默认的复制构造函数完成复制功能
#endif

#include <iostream>

using namespace std;

class Complex {
    private:
        double real, imag;
};

int main(void) {
    Complex c1;     // 调用缺省无参构造函数
    Complex c2(c1); // 调用缺省的复制构造函数, 将c2初始化成和c1一样
    return 0;
}