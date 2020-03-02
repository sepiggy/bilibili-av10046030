#if 0
析构函数和数组
#endif

#include <iostream>

using namespace std;

class Ctest {
    public:
        ~Ctest() {
            cout << "destructor called" << endl;
        }
};

int main(void) {
    Ctest array[2];
    cout << "End Main" << endl;
    return 0;
}