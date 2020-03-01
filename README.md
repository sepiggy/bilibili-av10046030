Demos for [C++程序设计(北京大学)](https://www.bilibili.com/video/av10046030/)

# 一 C语言高级知识点
## (一) 函数指针
1. 程序在运行期间, 每个函数都会占用一段连续的内存空间
2. 函数名就是该函数所占内存区域的起始地址, 可以将该地址赋值给一个指针变量. 这种指向函数的指针变量称为`函数指针`
3. qsort库函数是应用函数指针的一个例子
    - qsort函数签名
        ```c
        void
        qsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *));
        ```
    - int 比较函数名(const void *elem1, const void *elem2);
    - 比较函数编写规则
        - 如果*elem1应该排在*elem2前面, 则函数返回值是负整数
        - 如果*elem1和*elem2哪个排在前面都行, 那么函数返回0
        - 如果*elem1应该排在*elem2后面, 则函数返回值是正整数
## (二) 命令行参数
