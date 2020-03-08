#if 0
函数模板作为类模板成员
#endif

#include <iostream>

using namespace std;

template <class T>
class A {
    public:
        template<class T2>
        void Func(T2 t) { cout << t << endl; } // 成员函数模板
};

int main() {
    A<int> a;    // 类模板被实例化
    a.Func('K'); // 成员函数模板Func被实例化
    a.Func(1);
    a.Func("abc");

    return 0;
}