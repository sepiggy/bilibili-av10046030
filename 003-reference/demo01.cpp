#if 0
引用的概念
#endif

#include <iostream>

using namespace std;

int main() {
    int n = 7;
    // r is a reference to n
    int &r = n;

    r = 4;
    cout << r << endl;
    cout << n << endl;

    n = 5;
    cout << r << endl;

    return 0;
}