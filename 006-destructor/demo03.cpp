#if 0
delete运算符导致析构函数调用
#endif

#include <iostream>

using namespace std;

class CTest {
    public:
        CTest() {
            cout << "CTest()" << endl;
        }
        ~CTest() {
            cout << "~CTest()" << endl;
        }
};

int main() {
    CTest *pCTest;
    /** 构造函数和析构函数都被调用了一次 **/
    pCTest = new CTest;
    delete pCTest;

    /** 构造函数和析构函数都被调用了三次 **/
    pCTest = new CTest[3];
    delete[] pCTest;
    return 0;
}