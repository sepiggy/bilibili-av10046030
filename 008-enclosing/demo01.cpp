class CTyre {
    private:
        int radius;
        int width;
    public:
        // 初始化列表
        CTyre(int r, int w):radius(r), width(w) {}
};

class CEngine {};

// 汽车类 (封闭类)
class CCar {
    private:
        int price;
        CTyre tyre;
        CEngine engine;
    public:
        CCar(int p, int tr, int tw);
};

CCar::CCar(int p, int tr, int w):price(p), tyre(tr, w) {};

int main() {
    CCar car(20000, 17, 225);
    return 0;
}