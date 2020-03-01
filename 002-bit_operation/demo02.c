#if 0
判断一个int型变量n的第7位(从右往左, 从0开始)是否是1
只需看表达式"n & 0x80"的值是否等于0x80即可
#endif

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n = 0x1234;

    // 0x80: 1000 0000
    printf("%d\n", (n & 0x80) == 0x80);

    exit(0);
}