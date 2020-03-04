#if 0
多态的表现形式1
#endif

#include <iostream>

using namespace std;

class CBase {
    public:
        virtual void SomeVirtualFunction() {
            cout << "CBase" << endl;
        }
};

class CDerived: public CBase {
    public:
        virtual void SomeVirtualFunction() {
            cout << "CDerived" << endl;
        }
};

int main(void) {
    CDerived ODerived;
    CBase *p = &ODerived;
    p -> SomeVirtualFunction();
    return 0;
}