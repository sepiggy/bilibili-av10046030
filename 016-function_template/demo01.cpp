#if 0
交换两个变量值的函数模板
#endif

#include <iostream>

using namespace std;

template <class T>
void Swap(T &x, T &y) {
    T tmp = x;
    x = y;
    y = tmp;
}

int main(void) {

    int n = 1, m = 2;
    Swap(n, m);
    cout << "n=" << n << ", m=" << m << endl;

    double f = 1.2, g = 2.3;
    Swap(f, g);
    cout << "f=" << f << ", g=" << g << endl;

    return 0;
}