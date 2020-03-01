#if 0
引用作为函数的返回值
#endif

#include <iostream>

using namespace std;

int n = 4;

int& setValue() {
    return n;
}

int main(void) {

    cout << n << endl;
    setValue() = 40;  /** 等价于对n进行赋值 **/
    cout << n << endl;

    return 0;
}