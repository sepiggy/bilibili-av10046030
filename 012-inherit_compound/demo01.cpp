#if 0
继承和派生的基本用法
#endif

#include <iostream>

using namespace std;

class CStudent {
    private:
        string sName;
        int nAge;
    public:
        CStudent(string s, int n): sName(s), nAge(n) {};
        void PrintInfo() {
            cout << "sName=" << sName << endl;
            cout << "nAge=" << nAge << endl;
        }
};

class CUndergraduateStudent: public CStudent {
    private:
        int nDepartment;
    public:
        CUndergraduateStudent(string s, int n1, int n2): CStudent(s, n1), nDepartment(n2) {};
        void PrintInfo() {
            CStudent::PrintInfo(); // 先调用基类的方法
            cout << "nDepartment=" << nDepartment << endl;
        }
};

int main(void) {
    CUndergraduateStudent student("sepiggy", 100, 1234);
    student.PrintInfo();
    return 0;
}