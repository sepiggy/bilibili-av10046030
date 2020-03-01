#if 0
对象的内存分配
#endif

#include <iostream>

using namespace std;

class CRectangle {
    public:
        int w, h;

        void init(int _w, int _h) {
            w = _w; h = _h;
        }

        int area() {
            return w * h;
        }

        int perimeter() {
            return 2 * (w + h);
        }
};

int main(void) {
    CRectangle r;
    cout << "sizeof(CRectangle)=" << sizeof(CRectangle) << endl;

    return 0;
}
