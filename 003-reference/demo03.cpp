#if 0
编写一个交换两个整型变量值的函数
#endif

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(void) {

    int n1=100, n2=200;
    cout << "n1=" << n1 << ", n2=" << n2 << endl;
    swap(n1, n2);
    cout << "n1=" << n1 << ", n2=" << n2 << endl;

    return 0;
}