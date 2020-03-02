#include <iostream>

using namespace std;

class B {
    public:
        void function();
};

class A {
    friend void B::function();
};

int main(void) {


    return 0;
}