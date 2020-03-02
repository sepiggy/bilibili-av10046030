#if 0
友元函数
#endif

#include <iostream>

using namespace std;

class CCar;
class CDriver {
    public:
        void ModifyCar(CCar *pCar); // 改装汽车
};

class CCar {
    private:
        int price;
    friend int MostExpensiveCar(CCar cars[], int total); // 声明友元函数
    friend void CDriver::ModifyCar(CCar *pCar); // 声明友元函数
};

// 其它类的成员函数
void CDriver::ModifyCar(CCar *pCar) {
    pCar->price += 1000;
}

// 全局函数
int MostExpensiveCar(CCar cars[], int total) {
    int tmpMax = -1;
    for (int i = 0; i < total; i++) {
        if (cars[i].price > tmpMax)
            tmpMax = cars[i].price;
    }
    return tmpMax;
}

int main(void) {


    return 0;
}