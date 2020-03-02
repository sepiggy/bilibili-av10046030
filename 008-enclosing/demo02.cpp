#if 0
调用顺序
#endif

#include <iostream>

using namespace std;

class CTyre {
    public:
        CTyre() { cout << "CTyre constructor" << endl; }
        ~CTyre() { cout << "CTyre destructor" << endl; }
};

class CEngine {
    public:
        CEngine() { cout << "CEngine constructor" << endl; }
        ~CEngine() { cout << "CEngine destructor" << endl; }
};

class CCar {
    private:
        CEngine engine;
        CTyre tyre;
    public:
        CCar() { cout << "CCar constructor" << endl; }
        ~CCar() { cout << "CCar destructor" << endl; }
};

int main(void) {
    CCar car;
    return 0;
}