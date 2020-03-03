#if 0
常量成员函数
#endif

#include <iostream>

using namespace std;

class Sample {
    public:
        int value;
        void GetValue() const;
        void func() {};
        Sample() {}
};

void Sample::GetValue() const {
    // value = 0; // error
    // func(); // error
}

int main(void) {
    const Sample o;
    //!
    // o.value = 100;
    // o.func();
    o.GetValue();

    return 0;
}