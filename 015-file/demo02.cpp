#if 0
将students.dat文件的Jane的名字改成Mike
#endif

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class CStudent {
    public:
        char szName[20];
        int nScore;
};

int main() {
    CStudent s;
    fstream iofile("students.dat", ios::in|ios::out|ios::binary);
    if (!iofile) {
        cout << "error";
        return 0;
    }
    iofile.seekp(2 * sizeof(s), ios::beg);
    iofile.write("Mike", strlen("Mike") + 1);
    iofile.seekg(0, ios::beg);
    while (iofile.read((char*)&s, sizeof(s)))
        cout << s.szName << "" << s.nScore << endl;
    iofile.close();

    return 0;
}