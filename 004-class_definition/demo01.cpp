#if 0
矩形类的定义
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
    int w, h;
    CRectangle r;
    cin >> w >> h;
    r.init(w, h);
    cout << r.area() << endl << r.perimeter() << endl;

    return 0;
}
