#if 0
运算符重载实例：长度可变的整型数组类
#endif

#include <iostream>
#include <cstring>

using namespace std;

class CArray {
    int size;
    int *ptr;
    public:
        CArray(int s = 0);  /** s代表数组元素的个数 **/
        CArray(CArray &a);
        ~CArray();
        void push_back(int);
        int length() { return size; }
        CArray& operator=(const CArray&);
        //! 注意返回值是int&类型
        int& operator[](int i) {
            return ptr[i];
        }
};

CArray::CArray(int s):size(s) {
    if (s == 0) {
        ptr = NULL;
    } else {
        ptr = new int[s];
    }
}

//! 深拷贝
CArray::CArray(CArray &a) {
    if (!a.ptr) {
        ptr = NULL;
        size = 0;
        return;
    }
    ptr = new int[a.size];
    memcpy(ptr, a.ptr, sizeof(int) * a.size);
    size = a.size;
}

CArray::~CArray() {
    if (ptr) {
        delete []ptr;
    }
}

CArray& CArray::operator=(const CArray &a) {
    if (ptr == a.ptr)
        return *this;
    if (a.ptr == NULL) {
        if (ptr) delete[] ptr;
        ptr = NULL;
        size = 0;
        return *this;
    }
    if (size < a.size) {
        if (ptr)
            delete []ptr;
        ptr = new int[a.size];
    }
    memcpy(ptr, a.ptr, sizeof(int) * a.size);
    size =  a.size;
    return *this;
}

void CArray::push_back(int v) {
    if (ptr) {
        int *tmpPtr = new int[size+1];
        memcpy(tmpPtr, ptr, sizeof(int) * size);
        delete []ptr;
        ptr = tmpPtr;
    } else { // 数组本来是空的
        ptr = new int[1];
    }
    ptr[size++] = v;
}

int main(void) {
    CArray a;
    for (int i = 0; i < 5; ++i) {
        a.push_back(i);
    }
    CArray a2, a3;
    a2 = a;
    for (int i = 0; i < a.length(); ++i) {
        cout << a2[i] << " ";
    }
    a2 = a3;
    for (int i = 0; i < a2.length(); ++i) {
        cout << a2[i] << " ";
    }
    cout << endl;
    a[3] = 100;
    CArray a4(a);
    for (int i = 0; i < a4.length(); ++i) {
        cout << a4[i] << " ";
    }
    return 0;
}