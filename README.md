Demos for [C++程序设计(北京大学)](https://www.bilibili.com/video/av10046030/)

- [一 从C走进C++](#一-从c走进c)
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
  - [(五) const关键字(read-only)](#五-const关键字read-only)
  - [(六) 动态内存分配](#六-动态内存分配)
  - [(七) 内联函数, 函数重载, 函数缺省参数](#七-内联函数-函数重载-函数缺省参数)
  - [(八) 面向对象程序设计方法](#八-面向对象程序设计方法)
  - [(九) 面向对象语言的发展历程](#九-面向对象语言的发展历程)
  - [(十) 从客观事物抽象出类的例子](#十-从客观事物抽象出类的例子)
# 一 从C走进C++
## (一) 函数指针
1. 程序在运行期间, 每个函数都会占用一段连续的内存空间
2. 函数名就是该函数所占内存区域的起始地址, 可以将该地址赋值给一个指针变量. 这种指向函数的指针变量称为`函数指针`
3. qsort库函数是应用函数指针的一个例子
    - qsort函数签名
        ```c
        void
        qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
        ```
    - qsort函数最后一个参数是一个函数指针, 其指向的函数签名为 `int 比较函数名(const void *elem1, const void *elem2);`
    - 比较函数编写规则
        - 如果*elem1应该排在*elem2前面, 则函数返回值是负整数
        - 如果*elem1和*elem2哪个排在前面都行, 那么函数返回0
        - 如果*elem1应该排在*elem2后面, 则函数返回值是正整数
## (二) 命令行参数
1. `int main(int argc, char *argv[])`
2. `int main(int argc, char **argv)`
## (三) 位运算
### 1 定义
1. 用于对整数类型(int, char, long等)变量中的某一位(bit)或者若干位进行操作, eg.
    - 判断某一位是否为1
    - 只改变其中某一位, 而保持其它位都不变
2. 六大位运算操作符概览: `&, |, ^, ~, <<, >>`
### 2 按位与(&)
1. 规则
    - 只有对应的两个二进制位均为1时, 结果的对应二进制位才为1, 否则为0
2. 应用
    - [将变量中的某些位清零且同时保留其它位不变](002-bit_operation/demo01.c)
    - [获取变量中的某一位](002-bit_operation/demo02.c)
### 3 按位或(|)
1. 规则
    - 只有对应的两个二进制位均为0时, 结果的对应二进制位才为0, 否则为1
2. 应用
    - [将变量中的某些位置1且同时保留其它位不变](002-bit_operation/demo03.c)
### 4 按位异或(^)
1. 规则
    - 只有对应的两个二进制位不相同时 结果的对应二进制位才为1, 否则为0
2. 应用
    - [将变量中的某些位取反且同时保留其它位不变](002-bit_operation/demo04.c)
    - [不借助临时变量交换两个变量的值](002-bit_operation/demo06.c)
3. 特点
    - [若a^b=c, 则有c^b=a及c^a=b](002-bit_operation/demo05.c)
        - 此规律可以用来进行最简单的加密和解密
### 5 按位非(~)
1. 规则
    - 将操作数中的二进制位0变为1, 1变为0
### 6 左移(<<)
1. 规则
    - `a<<b`
    - 将a各二进制位全部左移b位后得到的值
    - 左移时`高位丢弃, 低位补0`
    - a的值不因运算而改变
2. 应用
    - 左移1位, 相等于是乘以2; 左移n位, 相等于是乘以2^n (左移操作比乘法操作快得多)
### 7 右移(>>)
1. 规则
    - `a>>b`
    - 将a各二进制位全部右移b位后得到的值
    - 右移时移出最右边的位就被丢弃
    - a的值不因运算而改变
    - 对于有符号数, 右移时, 符号位(即最高位)将一起移动
        - 如果原符号位为1, 则右移时高位就补充1
        - 如果原符号位为0, 则右移时高位就补充0
2. 应用
    - 右移1位, 相等于是除以2, 右移n位, 相等于是除以2^n; 并且将结果往`小里取整`
        - -25>>4=-2; -25/(2^4)=-1.5625
        - -2>>4=-1; -2/(2^4)=-0.125
        - 18>>4=1; 18/(2^4)=1.125
### 8 思考题
- ![](images/Xnip2020-03-01_16-17-55.png)
## (四) 引用
1. 概念: [某个变量的引用, 等价于这个变量, 相当于这个变量的`别名`](003-reference/demo01.cpp)
2. 格式: `类型名 & 引用名 = 某变量名`
3. 特点
    - 定义引用时一定要将其`初始化`成引用某个`变量`
    - [初始化后, 引用就一直引用该变量, 不会再引用别的变量了](003-reference/demo02.cpp)
    - 引用只能引用变量, 不能引用常量和表达式
4. 常引用
    - 定义引用时, 前面加const关键字, 即为`常引用`, const即`read-only`
    - `const T &`和`T &`是不同的类型!!!
        - `T &`类型的引用或`T`类型的变量可以用来初始化`const T &`类型的引用
        - `const T`类型的常变量和`const T &`类型的常引用则不能用来初始化`T &`类型的引用, 除非进行`强制类型转换`
5. 例子
    - [交换两个变量](003-reference/demo03.cpp)
    - [引用作函数的返回值](003-reference/demo04.cpp)
## (五) const关键字(read-only)
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
        - T是任意类型名; p是类型为`T *`的指针
        - 动态分配出一片大小为`sizeof(T)`字节的内存空间, 并且将该内存空间的`起始地址`赋值给P
        - 例子
            ```cpp
            int *pn;
            pn = new int;
            *pn = 5;
            ```
    - `delete p;`
        - 用`new`动态分配的内存空间, 一定要用`delete`运算符进行释放
        - `delete 指针;`, 该指针必须指向`new`出来的空间
        - 一片空间不能被delete多次
2. 动态分配一个数组的存储空间
    - `p = new T[N];`
        - T是任意类型名; P是类型为`T *`的指针; N是要分配的数组元素的`个数`, 可以是整型`表达式`
        - 动态分配出一片大小为`N * sizeof(T)`字节的内存空间, 并且将该内存空间的`起始地址`赋值给P
        - 例子
            ```cpp
            int *pn;
            int i = 5;
            pn = new int[i * 20];
            pn[0] = 20;
            ```
    - `delete[] p;`
        - `delete[] 指针;`, 该指针`必须`指向new出来的数组
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

