#if 0
构造函数在数组中的使用
#endif

#include <iostream>

using namespace std;

class Test {
    public:
        Test(int n) {cout << "c1 called" << endl;}
        Test(int n, int m) {cout << "c2 called" << endl;}
        Test() {cout << "c3 called" << endl;}
};

int main(void) {
    Test array1[3] = {1, Test(1,2)};
    cout << "----------------" << endl;
    Test array2[3] = {Test(2,3), Test(1,2), 1};
    cout << "----------------" << endl;
    /** 只生成了两个对象, pArray[2]是未经初始化的指针 **/
    Test *pArray[3] = {new Test(4), new Test(1,2)};
    return 0;
}