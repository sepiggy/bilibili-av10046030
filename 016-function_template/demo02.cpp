#if 0
求数组的最大元素的函数模板
#endif

#include <iostream>

using namespace std;

template <class T>
T maxElement(T a[], int size) {
    T tmpMax = a[0];
    for (int i=1; i<size; i++) {
        if (tmpMax < a[i])
            tmpMax = a[i];
    }

    return tmpMax;
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    cout << maxElement(a, 5) << endl;
    double a1[] = {1.1, 2.1, 3.1, 4.1, 5.1};
    cout << maxElement(a1, 5) << endl;

    return 0;
}