#if 0
类模板的非类型参数
#endif

#include <iostream>

using namespace std;

template <class T, int size>
class CArray {
    T array[size];
    public:
        void Print() {
            for(int i=0; i<size; ++i)
                cout << array[i] << endl;
        }
};

int main() {


    return 0;
}