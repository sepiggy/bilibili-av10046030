#if 0
`sizeof`运算符不会计算静态成员变量
#endif

#include <iostream>
using namespace std;

class CMyclass {
    int n;
    /*static*/ int s;
};

int
main(void)
{
    cout << "sizeof(CMyclass)=" << sizeof(CMyclass) << endl;
    exit(0);
}