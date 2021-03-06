Demos for [C++程序设计(北京大学)](https://www.bilibili.com/video/av10046030/)

- [一 从 C 走进 C++](#一-从-c-走进-c)
  - [(一) 函数指针](#一-函数指针)
  - [(二) 命令行参数](#二-命令行参数)
  - [(三) 位运算](#三-位运算)
    - [1 定义](#1-定义)
    - [2 按位与(&)](#2-按位与)
    - [3 按位或(|)](#3-按位或)
    - [4 按位异或(^)](#4-按位异或)
    - [5 按位非(~)](#5-按位非)
    - [6 左移(<<)](#6-左移)
    - [7 右移(>>)](#7-右移)
    - [8 思考题](#8-思考题)
  - [(四) 引用](#四-引用)
  - [(五) const 关键字(read-only)](#五-const-关键字read-only)
  - [(六) 动态内存分配](#六-动态内存分配)
  - [(七) 内联函数, 函数重载, 函数缺省参数](#七-内联函数-函数重载-函数缺省参数)
  - [(八) 面向对象程序设计方法](#八-面向对象程序设计方法)
  - [(九) 面向对象语言的发展历程](#九-面向对象语言的发展历程)
  - [(十) 从客观事物抽象出类的例子](#十-从客观事物抽象出类的例子)
  - [(十一) 类成员的可访问范围](#十一-类成员的可访问范围)
- [二 类和对象](#二-类和对象)
  - [(一) 内联成员函数和重载成员函数](#一-内联成员函数和重载成员函数)
  - [(二) 构造函数](#二-构造函数)
  - [(三) 复制构造函数(copy constructor)](#三-复制构造函数copy-constructor)
  - [(四) 类型转换构造函数](#四-类型转换构造函数)
  - [(五) 析构函数 (Destructor) (见「C++ Primer(第5版、中文版)」第「444」页)](#五-析构函数-destructor-见c-primer第5版中文版第444页)
  - [(六) 静态成员变量和静态成员函数 (见「C++ Primer(第5版、中文版)」第「268」页)](#六-静态成员变量和静态成员函数-见c-primer第5版中文版第268页)
    - [1 静态成员变量](#1-静态成员变量)
    - [2 静态成员函数](#2-静态成员函数)
    - [3 静态成员的特点](#3-静态成员的特点)
    - [4 如何访问静态成员](#4-如何访问静态成员)
    - [5 注意](#5-注意)
  - [(七) 成员对象和封闭类](#七-成员对象和封闭类)
  - [(八) 友元(friend关键字)](#八-友元friend关键字)
    - [1 友元函数](#1-友元函数)
    - [2 友元类](#2-友元类)
  - [(九) this指针](#九-this指针)
    - [1 课件](#1-课件)
  - [(十) 常量对象](#十-常量对象)
    - [1 要点](#1-要点)
    - [2 课件](#2-课件)
    - [3 代码](#3-代码)
- [三 运算符重载](#三-运算符重载)
  - [(一) 运算符重载的基本概念](#一-运算符重载的基本概念)
    - [1 要点](#1-要点-1)
    - [2 课件](#2-课件-1)
    - [3 代码](#3-代码-1)
  - [(二) 赋值运算符"="的重载](#二-赋值运算符的重载)
    - [1 要点](#1-要点-2)
    - [2 课件](#2-课件-2)
    - [3 代码](#3-代码-2)
  - [(三) 运算符重载为友元函数](#三-运算符重载为友元函数)
    - [1 课件](#1-课件-1)
    - [2 代码](#2-代码)
  - [(四) 运算符重载实例：长度可变的整型数组类](#四-运算符重载实例长度可变的整型数组类)
    - [1 要点](#1-要点-3)
    - [2 课件](#2-课件-3)
    - [3 代码](#3-代码-3)
  - [(五) 流插入运算符和流提取运算符重载](#五-流插入运算符和流提取运算符重载)
    - [1 要点](#1-要点-4)
    - [2 课件](#2-课件-4)
    - [3 代码](#3-代码-4)
  - [(六) 自加/自减运算符的重载](#六-自加自减运算符的重载)
    - [1 要点](#1-要点-5)
    - [2 课件](#2-课件-5)
    - [3 代码](#3-代码-5)
- [四 继承与复合](#四-继承与复合)
  - [(一) 继承和派生](#一-继承和派生)
    - [1 要点](#1-要点-6)
    - [2 课件](#2-课件-6)
    - [3 代码](#3-代码-6)
  - [(二) 复合关系和继承关系](#二-复合关系和继承关系)
    - [1 要点](#1-要点-7)
    - [2 课件](#2-课件-7)
    - [3 代码](#3-代码-7)
  - [(三) 基类派生类同名成员和protected关键字](#三-基类派生类同名成员和protected关键字)
    - [1 要点](#1-要点-8)
    - [2 课件](#2-课件-8)
    - [3 代码](#3-代码-8)
  - [(四) 派生类的构造函数](#四-派生类的构造函数)
    - [1 要点](#1-要点-9)
    - [2 课件](#2-课件-9)
    - [3 代码](#3-代码-9)
  - [(五) public继承的赋值兼容规则](#五-public继承的赋值兼容规则)
    - [1 要点](#1-要点-10)
    - [2 课件](#2-课件-10)
    - [3 代码](#3-代码-10)
- [五 多态与虚函数](#五-多态与虚函数)
  - [(一) 多态和虚函数的基本概念](#一-多态和虚函数的基本概念)
    - [1 要点](#1-要点-11)
    - [2 课件](#2-课件-11)
    - [3 代码](#3-代码-11)
  - [(二) 使用多态的游戏程序实例](#二-使用多态的游戏程序实例)
    - [1 要点](#1-要点-12)
    - [2 课件](#2-课件-12)
    - [3 代码](#3-代码-12)
  - [(三) 更多多态程序实例](#三-更多多态程序实例)
    - [1 要点](#1-要点-13)
    - [2 课件](#2-课件-13)
    - [3 代码](#3-代码-13)
  - [(四) 多态实现原理](#四-多态实现原理)
    - [1 要点](#1-要点-14)
    - [2 课件](#2-课件-14)
    - [3 代码](#3-代码-14)
  - [(五) 虚析构函数](#五-虚析构函数)
    - [1 要点](#1-要点-15)
    - [2 课件](#2-课件-15)
    - [3 代码](#3-代码-15)
  - [(六) 纯虚函数和抽象类](#六-纯虚函数和抽象类)
    - [1 要点](#1-要点-16)
    - [2 课件](#2-课件-16)
    - [3 代码](#3-代码-16)
- [六 文件操作和模板](#六-文件操作和模板)
  - [(一) 文件操作](#一-文件操作)
    - [1 要点](#1-要点-17)
    - [2 课件](#2-课件-17)
    - [3 代码](#3-代码-17)
  - [(二) 函数模板](#二-函数模板)
    - [1 要点](#1-要点-18)
    - [2 课件](#2-课件-18)
    - [3 代码](#3-代码-18)
  - [(三) 类模板](#三-类模板)
    - [1 要点](#1-要点-19)
    - [2 课件](#2-课件-19)
    - [3 代码](#3-代码-19)
  - [(四) string类](#四-string类)
    - [1 要点](#1-要点-20)
    - [2 课件](#2-课件-20)
    - [3 代码](#3-代码-20)
  - [(五) 输入输出](#五-输入输出)
    - [1 要点](#1-要点-21)
    - [2 课件](#2-课件-21)
    - [3 代码](#3-代码-21)
- [七 标准模板库 STL-1](#七-标准模板库-stl-1)
  - [(一) STL-概述](#一-stl-概述)
    - [1 要点](#1-要点-22)
    - [2 课件](#2-课件-22)
    - [3 代码](#3-代码-22)
  - [(二) STL-概述(续)](#二-stl-概述续)
    - [1 要点](#1-要点-23)
    - [2 课件](#2-课件-23)
    - [3 代码](#3-代码-23)
  - [(三) 顺序容器vector](#三-顺序容器vector)
    - [1 要点](#1-要点-24)
    - [2 课件](#2-课件-24)
    - [3 代码](#3-代码-24)
  - [(四) List和Deque](#四-list和deque)
    - [1 要点](#1-要点-25)
    - [2 课件](#2-课件-25)
    - [3 代码](#3-代码-25)
  - [(五) 函数对象](#五-函数对象)
    - [1 要点](#1-要点-26)
    - [2 课件](#2-课件-26)
    - [3 代码](#3-代码-26)
- [八 标准模板库 STL-2](#八-标准模板库-stl-2)
- [九 C++高级主题和 C++11 新特性](#九-c高级主题和-c11-新特性)

# 一 从 C 走进 C++
## (一) 函数指针
1. 程序在运行期间, 每个函数都会占用一段连续的内存空间
2. 函数名就是该函数所占内存区域的起始地址, 可以将该地址赋值给一个指针变量. 这种指向函数的指针变量称为`函数指针`
3. qsort 库函数是应用函数指针的一个例子
    - qsort 函数签名
        ```c
        void
        qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
        ```
    - qsort 函数最后一个参数是一个函数指针, 其指向的函数签名为 `int 比较函数名(const void *elem1, const void *elem2);`
    - 比较函数编写规则
        - 如果*elem1 应该排在*elem2 前面, 则函数返回值是负整数
        - 如果*elem1 和*elem2 哪个排在前面都行, 那么函数返回 0
        - 如果*elem1 应该排在*elem2 后面, 则函数返回值是正整数

## (二) 命令行参数
1. `int main(int argc, char *argv[])`
2. `int main(int argc, char **argv)`

## (三) 位运算
### 1 定义
1. 用于对整数类型(int, char, long 等)变量中的某一位(bit)或者若干位进行操作, eg.
    - 判断某一位是否为 1
    - 只改变其中某一位, 而保持其它位都不变
2. 六大位运算操作符概览: `&, |, ^, ~, <<, >>`

### 2 按位与(&)
1. 规则
    - 只有对应的两个二进制位均为 1 时, 结果的对应二进制位才为 1, 否则为 0
2. 应用
    - [将变量中的某些位清零且同时保留其它位不变](002-bit_operation/demo01.c)
    - [获取变量中的某一位](002-bit_operation/demo02.c)

### 3 按位或(|)
1. 规则
    - 只有对应的两个二进制位均为 0 时, 结果的对应二进制位才为 0, 否则为 1
2. 应用
    - [将变量中的某些位置 1 且同时保留其它位不变](002-bit_operation/demo03.c)

### 4 按位异或(^)
1. 规则
    - 只有对应的两个二进制位不相同时 结果的对应二进制位才为 1, 否则为 0
2. 应用
    - [将变量中的某些位取反且同时保留其它位不变](002-bit_operation/demo04.c)
    - [不借助临时变量交换两个变量的值](002-bit_operation/demo06.c)
3. 特点
    - [若 a^b=c, 则有 c^b=a 及 c^a=b](002-bit_operation/demo05.c)
        - 此规律可以用来进行最简单的加密和解密

### 5 按位非(~)
1. 规则
    - 将操作数中的二进制位 0 变为 1, 1 变为 0

### 6 左移(<<)
1. 规则
    - `a<<b`
    - 将 a 各二进制位全部左移 b 位后得到的值
    - 左移时`高位丢弃, 低位补0`
    - a 的值不因运算而改变
2. 应用
    - 左移 1 位, 相等于是乘以 2; 左移 n 位, 相等于是乘以 2^n (左移操作比乘法操作快得多)

### 7 右移(>>)
1. 规则
    - `a>>b`
    - 将 a 各二进制位全部右移 b 位后得到的值
    - 右移时移出最右边的位就被丢弃
    - a 的值不因运算而改变
    - 对于有符号数, 右移时, 符号位(即最高位)将一起移动
        - 如果原符号位为 1, 则右移时高位就补充 1
        - 如果原符号位为 0, 则右移时高位就补充 0
2. 应用
    - 右移 1 位, 相等于是除以 2, 右移 n 位, 相等于是除以 2^n; 并且将结果往`小里取整`
        - -25>>4=-2; -25/(2^4)=-1.5625
        - -2>>4=-1; -2/(2^4)=-0.125
        - 18>>4=1; 18/(2^4)=1.125

### 8 思考题
-   ![](images/Xnip2020-03-01_16-17-55.png)

## (四) 引用
1. 概念: [某个变量的引用, 等价于这个变量, 相当于这个变量的`别名`](003-reference/demo01.cpp)
2. 格式: `类型名 & 引用名 = 某变量名`
3. 特点
    - 定义引用时一定要将其`初始化`成引用某个`变量`
    - [初始化后, 引用就一直引用该变量, 不会再引用别的变量了](003-reference/demo02.cpp)
    - 引用只能引用变量, 不能引用常量和表达式
4. 常引用
    - 定义引用时, 前面加 const 关键字, 即为`常引用`, const 即`read-only`
    - `const T &`和`T &`是不同的类型!!!
        - `T &`类型的引用或`T`类型的变量可以用来初始化`const T &`类型的引用
        - `const T`类型的常变量和`const T &`类型的常引用则不能用来初始化`T &`类型的引用, 除非进行`强制类型转换`
5. 例子
    - [交换两个变量](003-reference/demo03.cpp)
    - [引用作函数的返回值](003-reference/demo04.cpp)

## (五) const 关键字(read-only)
1. 定义常量
    ```c
    const int MAX_VAL = 23;
    const char *SCHOOL_NAME = "Peking University"
    ```
2. 定义常量指针
    - 不可通过常量指针修改其指向的内容
    - 不能把常量指针赋值给非常量指针; 反过来可以 (`常量指针指向的内容倾向于不被修改`)
        ```c
        const int *p1; int *p2;
        p1 = p2; // ok
        p2 = p1; // error
        p2 = (int*)p1; // ok, cast conversion
        ```
    - 函数参数为常量指针时, 可避免函数内部不小心改变参数指针所指地方的内容
3. 定义常引用
    - 不能通过常引用修改其引用的变量(见前面笔记)

## (六) 动态内存分配
1. 动态分配一个变量的存储空间
    - `p = new T;`
        - 用`new`运算符实现动态内存分配, 其返回类型为`T *`
        - T 是任意类型名; p 是类型为`T *`的指针
        - 动态分配出一片大小为`sizeof(T)`字节的内存空间, 并且将该内存空间的`起始地址`赋值给 P
        - 例子
            ```cpp
            int *pn;
            pn = new int;
            *pn = 5;
            ```
    - `delete p;`
        - 用`new`动态分配的内存空间, 一定要用`delete`运算符进行释放
        - `delete 指针;`, 该指针必须指向`new`出来的空间
        - 一片空间不能被 delete 多次
2. 动态分配一个数组的存储空间
    - `p = new T[N];`
        - T 是任意类型名; P 是类型为`T *`的指针; N 是要分配的数组元素的`个数`, 可以是整型`表达式`
        - 动态分配出一片大小为`N * sizeof(T)`字节的内存空间, 并且将该内存空间的`起始地址`赋值给 P
        - 例子
            ```cpp
            int *pn;
            int i = 5;
            pn = new int[i * 20];
            pn[0] = 20;
            ```
    - `delete[] p;`
        - `delete[] 指针;`, 该指针`必须`指向 new 出来的数组
        - 例子
            ```cpp
            int *p = new int[20];
            p[0] = 1;
            delete []p;
            ```

## (七) 内联函数, 函数重载, 函数缺省参数
1. 内联函数
    - 编译器处理对内联函数的调用语句时, 是将整个函数的代码插入到调用语句处, 而不会产生调用函数的语句和开销
    - 在函数定义前加`inline`关键字, 即可定义内联函数
2. 函数重载
    - 函数名相同而参数表不同
    - 编译器根据实参的个数和类型判断应该调用哪个函数
3. 函数的缺省参数
    - 定义函数的时候可以让`最右边的连续`若干个参数有缺省值, 那么调用函数的时候, 若相应位置不写参数, 参数就是缺省值
    - 函数参数可缺省的目的在于提高程序的可扩充性, 便于重构

## (八) 面向对象程序设计方法
1. 面向过程: `程序=数据结构(变量)+算法(函数)`
2. 面向对象: `程序=类+类+...类`

## (九) 面向对象语言的发展历程
## (十) 从客观事物抽象出类的例子
1. 一个例子
   ![](images/Xnip2020-03-01_20-32-57.png)
2. [代码](004-class_definition/demo01.cpp)
3. `类定义的变量->类的实例->"对象"`; 定义类对应变量的过程称为`实例化`
4. 对象的内存分配
    - 对象的内存空间
        - 对象的大小=所有成员变量的大小之和
        - [例子](004-class_definition/demo02.cpp)
    - 每个对象各有自己的存储空间
        - 一个对象的某个成员变量被改变, 不会影响到其它的对象
5. 对象间的运算
    - 对象之间可以用`=`进行赋值
    - 不能用`==, !=, >, <, >=, <=`进行比较, 除非这些运算符进行了`重载`
6. 访问类的成员变量和成员函数
    - 对象.成员名
    - 对象的指针->成员名
    - 对象的引用.成员名
7. 类的成员函数的另一种写法, 即`成员函数体和类的定义分开写`

    ```cpp
    class CRectangle {
        public:
             int w, h;
             int area(); // 成员函数仅在此处声明
             int perimeter();
             void init(int _w, int _h);
    };

    int CRectangle::area() {
        return w * h;
    }
    int CRectangle::perimeter() {
        return 2 * (w+h);
    }
    int CRectangle::init(int _w, int _h) {
        w = _w; h = _h;
    }
    ```

## (十一) 类成员的可访问范围
1. 关键字
    - private, 只能在`成员函数内`被访问
    - public, 可以在`任何地方`被访问
    - protected, 只能在`自己或自己的子类内`被访问
2. 三种关键字出现的次数和先后次序都没有限制
3. 定义一个类
    ```cpp
    class className {
        private:
            私有属性和函数
        public:
            公有属性和函数
        protected:
            保护属性和函数
    };
    ```
4. 缺省访问范围为`private`
5. 对象成员的访问权限
    - 类的成员函数内部, 可以访问:
        - 当前对象的全部属性和函数
        - `同类`其它对象的全部属性和函数
    - 类的成员函数以外的地方, 只能访问:
        - 该类对象的公有成员
    - 设置私有成员的目的
        - `强制`对成员变量的访问一定要通过成员函数进行
        - 隐藏 -> 封装

# 二 类和对象
## (一) 内联成员函数和重载成员函数
1. 内联成员函数的两种定义方式

    - inline + 成员函数
    - 整个函数体出现在类定义内部
    - 例子:

        ```cpp
        class B {
            inline void func1(); // 内联函数
            void func2() { // 内联函数

            };
        };
        void B::func1(){}
        ```

2. 成员函数的重载以及参数缺省
    - 重载成员函数
    - 成员函数带缺省参数
    - 使用缺省参数要注意避免有函数重载时的二义性
    - 例子:
        ```cpp
        #include <iostream>
        using namespace std;
        class Location {
            private:
              int x, y;
            public:
              void init(int x=0, int y=0);
              void valueX(int val) { x= val; }
              int valueX() { return x; }
        };
        void Location::init(int X, int Y) {
            x = X;
            y = Y;
        }
        ```

## (二) 构造函数
1. 构造函数是成员函数的一种
2. 构造函数的名字与类名相同, 可以有参数, 不能有返回值(void 也不行)
3. 构造函数的作用是`对对象进行初始化, 如给成员变量赋初值`
4. [如定义类时没写构造函数, 则编译器生成一个默认的`无参数`的构造函数](005-005-constructor/demo01.cpp)
    - 默认构造函数无参数, 不做任何操作
    - 如果定义了构造函数, 则编译器不生成默认的无参数的构造函数
5. `对象生成时构造函数自动被调用. 对象一旦生成, 就再也不能在其上执行构造函数`
6. 一个类可以有多个构造函数, 多个构造函数可以构成`重载函数`
7. 构造函数在数组中的使用
    - [例子 1](005-constructor/demo02.cpp)
    - [例子 2](005-constructor/demo03.cpp)

## (三) 复制构造函数(copy constructor)
1. `复制构造函数`只有一个参数, 即`对同类对象的引用`
2. `复制构造函数在一个类中只能有一个`; 形如`X::X(X&)`或`X::X(const X &)`, 二者选一, 后者能以常量对象作为参数
3. [如果没有定义复制构造函数, 那么编译器生成`默认复制构造函数`. 默认的复制构造函数完成复制功能](005-constructor/demo04.cpp)
4. [如果定义了自己的复制构造函数, 则默认的复制构造函数不存在](005-constructor/demo05.cpp)
5. 复制构造函数起作用的三种情况
    - 当用一个对象去初始化同类的另一个对象时
        ```cpp
        Complex c2(c1);
        Complex c2 = c1; // 与上句等价, 这是一条初始化语句, 非赋值语句
        ```
    - [如果某个函数有一个参数是类 A 的对象, 那么该函数被调用时, 类 A 的复制构造函数将被调用](005-constructor/demo06.cpp)
    - [如果某个函数的返回值是类 A 的对象时, 则函数返回时, A 的复制构造函数被调用](005-constructor/demo07.cpp)

## (四) 类型转换构造函数
1. 目的: 实现类型的自动转换
2. 特点
    - 只有一个参数
    - 不是复制构造函数
3. [编译系统在适当的时候会自动调用转换构造函数, 建立一个临时对象/临时变量](005-constructor/demo08.cpp)

## (五) 析构函数 (Destructor) (见「C++ Primer(第5版、中文版)」第「444」页)
1. 成员函数的一种
    - 名字与类名相同
    - 在前面加`~`
    - 没有参数和返回值
    - 一个类`最多只有一个`析构函数
2. [`对象消亡时`析构函数会被自动调用](006-destructor/demo01.cpp)
    - 在对象消亡前做善后工作
      - 释放分配的空间等
    - 定义类时没写析构函数, 则编译器会生成`缺省析构函数`
      - 不会释放用户申请的内存空间
    - 若程序员定义了析构函数, 则编译器不生成缺省的析构函数
3. 析构函数和数组
    - [对象数组生命期结束时, 对象数组的每个元素的析构函数都会被调用](006-destructor/demo02.cpp)
4. 构造函数和运算符delete
    - [delete运算符导致析构函数调用](006-destructor/demo03.cpp)

## (六) 静态成员变量和静态成员函数 (见「C++ Primer(第5版、中文版)」第「268」页)
### 1 静态成员变量
1. 普通成员变量每个对象有各自的一份, 而静态成员变量一共就一份, `为所有对象共享`
2. 静态成员变量本质上是`全局变量`, 哪怕一个对象都不存在, 类的静态成员变量也存在
3. [`sizeof`运算符不会计算静态成员变量](007-static/demo01.cpp)
### 2 静态成员函数
1. 普通成员函数必须具体作用于某个对象, 而静态成员函数`并不具体作用于某个对象`
2. 静态成员函数本质上是全局函数
### 3 静态成员的特点
- 设置静态成员这种机制其目的在于`将和某些类紧密相关的全局变量和函数写到类里面, 看上去像一个整体`, 易于维护和理解
### 4 如何访问静态成员
1. 类名::成员名
2. 对象名.成员名
3. 指针->成员名
4. 引用.成员名
### 5 注意
1. 必须在定义类的文件中对静态成员变量进行一次说明或初始化; 否则编译能通过, 链接不能通过
2. 在静态成员函数中, 不能访问非静态成员变量, 也不能调用非静态成员函数

## (七) 成员对象和封闭类
1. 成员对象: 一个类的成员变量是另一个类的对象
2. 包含成员对象的类叫`封闭类(Enclosing)`
3. 生成封闭类对象的时候要明确`对象中的成员对象如何初始化`
4. [定义封闭类的构造函数时, 最佳实践是使用`初始化列表`](008-enclosing/demo01.cpp)
   - 模板
		```cpp
		类名::构造函数(参数表):成员变量1(参数表),成员变量2(参数表),...
		{
			...
		}
		```
   - 成员对象初始化列表中的参数
     - 任意复杂的表达式
     - 函数 / 变量 (有定义) / 表达式中的函数
5. [调用顺序](008-enclosing/demo02.cpp)
    ![](images/2020-03-02-21-46-18.png)

## (八) 友元(friend关键字)
### 1 友元函数
1. [一个类的`友元函数`可以访问该类的`私有成员`](009-friend/demo01.cpp)
2. [将一个类的成员函数(包括构造函数, 析构函数)定义为另一个类的友元函数](009-friend/demo02.cpp)
### 2 友元类
1. A是B的友元类, 则A的成员函数可以访问B的私有成员
   - ![](images/2020-03-02-22-24-13.png)
2. 友元类之间的关系不能传递, 不能继承

## (九) this指针
### 1 课件
![](images/2020-03-02-22-44-16.png)
![](images/2020-03-02-22-46-01.png)
![](images/2020-03-02-22-46-10.png)
![](images/2020-03-02-22-46-18.png)
![](images/2020-03-02-22-46-24.png)
![](images/2020-03-02-22-46-31.png)

## (十) 常量对象
### 1 要点
1. const：保证其限定的成分不被修改
2. 常引用：对象的引用作为函数参数，不是对象，因此不会引发复制构造函数。而声明为常引用，确保形参不会修改原始值，既保证效率，又保证数据安全
### 2 课件
![](images/2020-03-03-11-28-44.png)
![](images/2020-03-03-11-28-53.png)
![](images/2020-03-03-11-29-02.png)
![](images/2020-03-03-11-29-09.png)
![](images/2020-03-03-11-29-16.png)
![](images/2020-03-03-11-29-24.png)
![](images/2020-03-03-11-29-31.png)
![](images/2020-03-03-11-29-38.png)
![](images/2020-03-03-11-29-44.png)
### 3 代码
1. [常量成员函数](010-const/demo01.cpp)

# 三 运算符重载
## (一) 运算符重载的基本概念
### 1 要点
1. 注意重载成普通函数和成员函数的区别
### 2 课件
![](images/2020-03-03-14-54-00.png)
![](images/2020-03-03-14-54-11.png)
![](images/2020-03-03-14-54-22.png)
![](images/2020-03-03-14-54-32.png)
![](images/2020-03-03-14-54-40.png)
![](images/2020-03-03-14-54-54.png)
![](images/2020-03-03-15-33-36.png)
![](images/2020-03-03-14-55-03.png)
![](images/2020-03-03-14-55-13.png)
![](images/2020-03-03-14-55-21.png)
### 3 代码
1. [运算符重载](011-operator_overloading/demo01.cpp)

## (二) 赋值运算符"="的重载
### 1 要点
1. `赋值运算符=`重载解决的问题: `赋值号两端类型不匹配`
2. 运算符重载可通过重载为`成员函数`和`普通函数`来实现; 但赋值运算符只可重载为`成员函数`
### 2 课件
![](images/2020-03-03-16-57-02.png)
![](images/2020-03-03-16-57-11.png)
![](images/2020-03-03-16-57-21.png)
![](images/2020-03-03-16-57-41.png)
![](images/2020-03-03-16-57-51.png)
![](images/2020-03-03-16-58-00.png)
![](images/2020-03-03-16-58-12.png)
![](images/2020-03-03-16-58-21.png)
![](images/2020-03-03-16-58-28.png)
![](images/2020-03-03-16-58-35.png)
![](images/2020-03-03-16-58-44.png)
![](images/2020-03-03-16-58-52.png)
![](images/2020-03-03-16-59-02.png)
### 3 代码
1. [赋值运算符的重载](011-operator_overloading/demo02.cpp)

## (三) 运算符重载为友元函数
### 1 课件
![](images/2020-03-03-19-11-08.png)
![](images/2020-03-03-19-11-30.png)
![](images/2020-03-03-19-11-39.png)
![](images/2020-03-03-19-11-47.png)
### 2 代码
1. [运算符重载为友元函数](011-operator_overloading/demo03.cpp)

## (四) 运算符重载实例：长度可变的整型数组类
### 1 要点
1. `[]`是双目运算符, 其中一个操作数在`[]`外面, 另一个在`[]`里面
2. `非引用的`函数返回值不可以作为`左值`使用
### 2 课件
![](images/2020-03-03-21-35-26.png)
![](images/2020-03-03-21-35-43.png)
![](images/2020-03-03-21-35-52.png)
![](images/2020-03-03-21-36-02.png)
![](images/2020-03-03-21-36-15.png)
![](images/2020-03-03-21-36-25.png)
![](images/2020-03-03-21-36-33.png)
![](images/2020-03-03-21-36-41.png)
![](images/2020-03-03-21-36-48.png)
### 3 代码
1. [长度可变的整型数组类](011-operator_overloading/demo04.cpp)

## (五) 流插入运算符和流提取运算符重载
### 1 要点
1. 若运算符需要连续使用, 则需要用到函数的链式调用, 所以函数的返回值类型需要一个引用类型
### 2 课件
![](images/2020-03-04-11-23-46.png)
![](images/2020-03-04-11-23-57.png)
![](images/2020-03-04-11-24-07.png)
![](images/2020-03-04-11-24-15.png)
![](images/2020-03-04-11-24-22.png)
![](images/2020-03-04-11-24-30.png)
![](images/2020-03-04-11-24-36.png)
![](images/2020-03-04-11-24-44.png)
![](images/2020-03-04-11-24-51.png)
![](images/2020-03-04-11-24-59.png)
![](images/2020-03-04-11-25-06.png)
![](images/2020-03-04-11-25-14.png)
### 3 代码
1. [流插入运算符的重载的例子](011-operator_overloading/demo05.cpp)
2. [流插入运算符和流提取运算符重载的例子](011-operator_overloading/demo06.cpp)

## (六) 自加/自减运算符的重载
### 1 要点
1. 为了区别前置和后置运算符:
   - 前置运算符作为`一元运算符`重载
   - 后置运算符作为`二元运算符`重载
2. 类型强制转换运算符被重载时,
   - 不能写返回值类型
   - 实际上其返回值类型就是`类型强制转换运算符代表的类型`
   - 例子: `operator int() { return n; }`
### 2 课件
![](images/2020-03-04-15-33-12.png)
![](images/2020-03-04-15-33-24.png)
![](images/2020-03-04-15-33-30.png)
![](images/2020-03-04-15-33-36.png)
![](images/2020-03-04-15-33-44.png)
![](images/2020-03-04-15-33-53.png)
![](images/2020-03-04-15-34-04.png)
### 3 代码
1. [自加/自减运算符的重载](011-operator_overloading/demo07.cpp)

# 四 继承与复合
## (一) 继承和派生
### 1 要点
### 2 课件
![](images/2020-03-04-16-19-33.png)
![](images/2020-03-04-16-19-39.png)
![](images/2020-03-04-16-19-46.png)
![](images/2020-03-04-16-19-52.png)
![](images/2020-03-04-16-19-58.png)
![](images/2020-03-04-16-20-05.png)
![](images/2020-03-04-16-20-10.png)
![](images/2020-03-04-16-20-16.png)
![](images/2020-03-04-16-20-24.png)
![](images/2020-03-04-16-20-35.png)
![](images/2020-03-04-16-20-41.png)
![](images/2020-03-04-16-20-47.png)
![](images/2020-03-04-16-20-55.png)
### 3 代码
1. [继承和派生的基本用法](012-inherit_compound/demo01.cpp)

## (二) 复合关系和继承关系
### 1 要点
1. 类间关系包含以下三种：
    - 没关系
    - 继承关系
    - 复合关系
### 2 课件
![](images/2020-03-04-17-01-11.png)
![](images/2020-03-04-17-01-20.png)
![](images/2020-03-04-17-01-29.png)
![](images/2020-03-04-17-01-36.png)
![](images/2020-03-04-17-01-45.png)
![](images/2020-03-04-17-01-52.png)
![](images/2020-03-04-17-02-03.png)
![](images/2020-03-04-17-02-13.png)
![](images/2020-03-04-17-02-21.png)
![](images/2020-03-04-17-02-30.png)
![](images/2020-03-04-17-02-47.png)
### 3 代码
1. [复合关系示例](012-inherit_compound/demo02.cpp)

## (三) 基类派生类同名成员和protected关键字
### 1 要点
1. 基类和派生类的同名成员包括：同名成员变量、同名成员函数
   - 一般来说, 基类和派生类不定义同名成员变量
   - 派生类定义的同名成员函数会`覆盖`掉基类的同名成员函数
2. 同名条件下，访问基类成员的方式：
   - 函数访问：基类::成员
   - 对象访问：对象.基类::成员
3. `private`, `public`, `protected`三种访问范围说明符的用法见课件
### 2 课件
![](images/2020-03-04-17-26-34.png)
![](images/2020-03-04-17-26-43.png)
![](images/2020-03-04-17-26-51.png)
![](images/2020-03-04-17-26-57.png)
![](images/2020-03-04-17-27-02.png)
![](images/2020-03-04-17-27-10.png)
### 3 代码
无

## (四) 派生类的构造函数
### 1 要点
无
### 2 课件
![](images/2020-03-04-17-43-28.png)
![](images/2020-03-04-17-43-35.png)
![](images/2020-03-04-17-43-41.png)
![](images/2020-03-04-17-49-36.png)
![](images/2020-03-04-17-52-40.png)
![](images/2020-03-04-17-57-34.png)
![](images/2020-03-04-17-59-13.png)
### 3 代码
无

## (五) public继承的赋值兼容规则
### 1 要点
无
### 2 课件
![](images/2020-03-04-20-28-12.png)
![](images/2020-03-04-20-28-33.png)
![](images/2020-03-04-20-28-41.png)
![](images/2020-03-04-20-28-48.png)
![](images/2020-03-04-20-28-54.png)
### 3 代码
无

# 五 多态与虚函数
## (一) 多态和虚函数的基本概念
### 1 要点
1. 多态的用处：提高程序的可扩充性
2. 虚函数可参与多态，而普通成员函数不能
3. 多态的两种表形式:
    - 表现形式1: `有继承; 子类对象的地址赋值给父类指针; 通过父类指针调用父子类中的同名虚函数`
    - 表形形式2: `有继承; 子类对象赋值给父类引用; 通过父类引用调用父子类中的同名虚函数`
### 2 课件
![](images/2020-03-04-21-04-49.png)
![](images/2020-03-04-21-05-05.png)
![](images/2020-03-04-21-05-13.png)
![](images/2020-03-04-21-05-21.png)
![](images/2020-03-04-21-05-30.png)
![](images/2020-03-04-21-05-50.png)
![](images/2020-03-04-21-05-57.png)
![](images/2020-03-04-21-06-02.png)
### 3 代码
1. [表现形式1](013-polymorphism/demo01.cpp)
2. [表现形式2](013-polymorphism/demo02.cpp)

## (二) 使用多态的游戏程序实例
### 1 要点
无
### 2 课件
![](images/2020-03-04-21-19-55.png)
![](images/2020-03-04-21-20-05.png)
![](images/2020-03-04-21-20-12.png)
![](images/2020-03-04-21-20-19.png)
![](images/2020-03-04-21-20-26.png)
![](images/2020-03-04-21-20-34.png)
![](images/2020-03-04-21-20-42.png)
![](images/2020-03-04-21-20-50.png)
![](images/2020-03-04-21-20-57.png)
![](images/2020-03-04-21-21-06.png)
![](images/2020-03-04-21-21-13.png)
![](images/2020-03-04-21-21-20.png)
![](images/2020-03-04-21-21-27.png)
### 3 代码
无

## (三) 更多多态程序实例
### 1 要点
1. `使用基类指针数组存放派生类对象`是常规用法
2. `在非构造函数, 非析构函数的成员函数中调用虚函数`就是多态!!!
### 2 课件
![](images/2020-03-07-18-04-21.png)
![](images/2020-03-07-18-09-12.png)
![](images/2020-03-07-18-13-43.png)
![](images/2020-03-07-18-17-55.png)
### 3 代码
1. [几何形体处理程序](013-polymorphism/demo03.cpp)

## (四) 多态实现原理
### 1 要点
1. 虚函数表
### 2 课件
![](images/2020-03-07-18-22-51.png)
![](images/2020-03-07-18-24-14.png)
![](images/2020-03-07-18-27-20.png)
![](images/2020-03-07-18-30-59.png)
### 3 代码
无

## (五) 虚析构函数
### 1 要点
无
### 2 课件
![](images/2020-03-07-20-18-09.png)
![](images/2020-03-07-20-17-51.png)
![](images/2020-03-07-20-20-40.png)
![](images/2020-03-07-20-24-26.png)
### 3 代码
无

## (六) 纯虚函数和抽象类
### 1 要点
1. 类似于Java的抽象类
### 2 课件
![](images/2020-03-07-20-25-56.png)
![](images/2020-03-07-20-28-30.png)
![](images/2020-03-07-20-30-26.png)
### 3 代码
1. [抽象类的基本用法](014-abstract_class/demo01.cpp)

# 六 文件操作和模板
## (一) 文件操作
### 1 要点
无
### 2 课件
![](images/2020-03-07-20-45-03.png)
![](images/2020-03-07-20-45-16.png)
![](images/2020-03-07-20-45-25.png)
![](images/2020-03-07-20-45-34.png)
![](images/2020-03-07-20-45-42.png)
![](images/2020-03-07-20-45-50.png)
![](images/2020-03-07-20-45-58.png)
![](images/2020-03-07-20-46-04.png)
![](images/2020-03-07-20-46-11.png)
![](images/2020-03-07-20-46-18.png)
![](images/2020-03-07-20-46-26.png)
![](images/2020-03-07-20-46-33.png)
![](images/2020-03-07-20-46-39.png)
![](images/2020-03-07-20-46-45.png)
![](images/2020-03-07-20-46-52.png)
![](images/2020-03-07-20-46-59.png)
![](images/2020-03-07-20-47-05.png)
![](images/2020-03-07-20-47-13.png)
### 3 代码
1. [从键盘输入几个学生的信息并以二进制形式和文件形式存起来](015-file/demo01.cpp)
2. [将students.dat文件的Jane的名字改成Mike](015-file/demo02.cpp)

## (二) 函数模板
### 1 要点
1. 类似于Java中的泛型编程
2. 尽量在函数模板中使用多个`类型参数`, 避免程序的二义性问题
### 2 课件
![](images/2020-03-07-22-21-11.png)
![](images/2020-03-07-22-24-04.png)
![](images/2020-03-07-22-32-43.png)
![](images/2020-03-07-22-33-37.png)
![](images/2020-03-07-22-39-09.png)
![](images/2020-03-07-22-40-13.png)
![](images/2020-03-07-22-49-20.png)
![](images/2020-03-07-22-49-29.png)
### 3 代码
1. [交换两个变量值的函数模板](016-function_template/demo01.cpp)
2. [求数组的最大元素的函数模板](016-function_template/demo02.cpp)
3. [函数模板调用顺序](016-function_template/demo03.cpp)

## (三) 类模板
### 1 要点
1. 若函数模板作为类模板的成员函数, 则`函数模板的类型参数和类模板的类型参数不能相同`, 否则编译错误
2. 只要`非类型参数`不一样, 类模板实例化出来的类就不是同一个类
3. 类模板与继承
   1. 类模板派生出类模板
   2. 模板类派生出类模板
   3. 普通类派生出类模板
   4. 模板类派生出普通类
### 2 课件
![](images/2020-03-07-22-54-53.png)
![](images/2020-03-07-22-55-39.png)
![](images/2020-03-07-22-56-22.png)
![](images/2020-03-07-22-57-11.png)
![](images/2020-03-07-22-57-43.png)
![](images/2020-03-07-23-08-52.png)
![](images/2020-03-07-23-10-01.png)
![](images/2020-03-07-23-21-01.png)
![](images/2020-03-07-23-22-49.png)
![](images/2020-03-07-23-28-22.png)
![](images/2020-03-07-23-29-18.png)
![](images/2020-03-08-11-38-47.png)
![](images/2020-03-08-11-48-27.png)
![](images/2020-03-08-11-50-29.png)
![](images/2020-03-08-11-52-27.png)
![](images/2020-03-08-11-53-01.png)
### 3 代码
1. [Pair类模板](017-class_template/demo01.cpp)
2. [函数模板作为类模板成员](017-class_template/demo02.cpp)
3. [类模板的非类型参数](017-class_template/demo03.cpp)

## (四) string类
### 1 要点
### 2 课件
### 3 代码

## (五) 输入输出
### 1 要点
### 2 课件
### 3 代码

# 七 标准模板库 STL-1
## (一) STL-概述
### 1 要点
### 2 课件
### 3 代码

## (二) STL-概述(续)
### 1 要点
### 2 课件
### 3 代码

## (三) 顺序容器vector
### 1 要点
### 2 课件
### 3 代码

## (四) List和Deque
### 1 要点
### 2 课件
### 3 代码

## (五) 函数对象
### 1 要点
### 2 课件
### 3 代码

# 八 标准模板库 STL-2

# 九 C++高级主题和 C++11 新特性