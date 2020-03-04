#if 0
多态的表现形式2
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
    CBase &r = ODerived;
    r.SomeVirtualFunction();
    return 0;
}