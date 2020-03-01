#if 0
引用的概念
#endif

#include <iostream>

using namespace std;

int main() {
    double a = 4, b = 5;
    double &r1 = a;
    double &r2 = r1; // r2 also refers to a
    r2 = 10;
    cout << a << endl; // output 10
    r1 = b; // a = b; NOT r1 refers to b
    cout << a << endl;

    return 0;
}