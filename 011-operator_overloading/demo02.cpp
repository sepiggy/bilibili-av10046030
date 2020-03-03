#if 0

#endif

#include <iostream>
#include <cstring>

using namespace std;

class String {
    private:
        char *str;
    public:
        String(): str(NULL) {}
        ~String();
        const char *c_str() {return str;}
        char* operator=(const char *s);
        String& operator=(const String &s);
};

//! 浅拷贝
char* String::operator=(const char *s) {
    if (str) delete [] str;
    if (s) {
        str = new char[strlen(s)+1];
        strcpy(str, s);
    } else {
        str = NULL;
    }
    return str;
}

//! 深拷贝
String& String::operator=(const String &s) {
    if (str == s.str) {
        return *this;
    }
    if (str) {
        delete [] str;
    }
    str = new char[strlen(s.str)+1];
    strcpy(str, s.str);
    return *this;
}

String::~String() {
    if (str) {
        delete [] str;
    }
}

int main(void) {

    //! 浅拷贝
    String s;
    s = "Good Luck,";
    cout << s.c_str() << endl;

    //! 深拷贝
    String s1, s2;
    s1 = "this";
    s2 = "that";
    s1 = s2;
    cout << "s1 = " << s1.c_str() << endl;
    cout << "s2 = " << s2.c_str() << endl;

    return 0;
}