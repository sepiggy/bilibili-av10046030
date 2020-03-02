#if 0
构造函数在数组中的使用
#endif

#include <iostream>

using namespace std;

class CSample {
    int x;
public:
    CSample();
    CSample(int n);
};

CSample::CSample() {
    cout << "Constructor 1 Called" << endl;
}

CSample::CSample(int n) {
    x = n;
    cout << "Constructor 2 Called" << endl;
}

int main(void) {
    CSample array1[2];
    cout << "step1" << endl;
    CSample array2[2] = {4, 5};
    cout << "step2" << endl;
    CSample array3[2] = {3};
    cout << "step3" << endl;
    CSample *array4 = new CSample[2];
    delete []array4;
    return 0;
}