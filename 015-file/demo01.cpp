#if 0
从键盘输入几个学生的信息并以二进制形式和文件形式存起来
#endif

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class CStudent {
    public:
        char szName[20];    // 姓名
        int nScore;         // 成绩
};

int main() {
    CStudent s;
    ofstream outFile("students.dat", ios::out | ios::binary);
    while (cin >> s.szName >> s.nScore) {
        if (strcmp(s.szName, "exit") == 0) {
            break;
        }
        outFile.write((char*)&s, sizeof(s));
    }
    outFile.close();

    return 0;
}