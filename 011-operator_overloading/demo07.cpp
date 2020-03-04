#if 0
自加/自减运算符的重载
#endif

#include <iostream>

using namespace std;

class CDemo{
    private:
        int _i;
    public:
        CDemo(const CDemo &c):_i(c._i) {};
        CDemo operator++();        // 用于前置形式
        CDemo operator++(int);     // 用于后置形式
        operator int() {return _i;} // 类型强制转换运算符被重载
        friend CDemo operator--(CDemo &);
        friend CDemo operator--(CDemo &, int);
};

// 前置++
CDemo CDemo::operator++() {
    _i++;
    return *this;
}

// 后置++
CDemo CDemo::operator++(int k) {
    CDemo tmp(*this);
    _i++;
    return tmp; // 返回修改前的对象
}

// 前置--
CDemo operator--(CDemo &d) {
    d._i--;
    return d;
}

// 后置--
CDemo operator--(CDemo &d, int) {
    CDemo tmp(d);
    d._i--;
    return tmp;
}



int main(void) {
    CDemo d(5);
    cout << (d++) << ",";
    cout << d << ",";
    cout << (++d) << ",";
    cout << d << endl;
    cout << (d--) << ",";
    cout << d << ",";
    cout << (--d) << ",";
    cout << d << endl;
    return 0;
}