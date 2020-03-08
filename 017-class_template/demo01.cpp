#if 0
Pair类模板
#endif

#include <iostream>
#include <cassert>

using namespace std;

template <class T1, class T2>
class Pair {
    public:
        T1 key;    // 关键字
        T2 value;  // 值
        Pair(T1 k, T2 v):key(k), value(v) {};
        bool operator<(const Pair<T1, T2> &p) const;
};

// 成员函数
template<class T1, class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const {
    return key < p.key;
}

int main(void) {
    Pair <string, int> student("Tom", 19);
    cout << student.key << " " << student.value << endl;
    Pair <string, int> student1("Mizzle", 25);
    cout << student1.key << " " << student1.value << endl;

    assert(student < student1);

    return 0;
}