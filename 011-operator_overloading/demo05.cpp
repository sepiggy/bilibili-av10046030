#if 0
流插入运算符重载的例子
#endif

#include <iostream>

using namespace std;

class CStudent {
    public:
        int nAge;
};

ostream& operator<<(ostream &o, const CStudent &s) {
    o << s.nAge;
    return o;
}

int main(void) {
    CStudent s;
    s.nAge = 5;
    // 要使得下面这句运行成功, 需要进行"<<"运算符的重载
    cout << s << "hello" << endl;

    return 0;
}