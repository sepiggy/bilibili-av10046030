#if 0
复合关系示例
模拟人养狗的场景
#endif

#include <iostream>

using namespace std;

class CMaster;

class CDog {
    CMaster *pm;
};

class CMaster {
    CDog *dogs[10];
};

int main(void) {


    return 0;
}