#if 0

#endif

#include <iostream>

using namespace std;

class String {
    private:
        char *p;
    public:
        String() {
            p = new char[10];
        }
        ~ String();
};

String::~String() {
    /** 析构函数 **/
    delete [] p;
}

int main(void) {


    return 0;
}