#if 0
不借助临时变量交换两个变量的值
#endif

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int a = 5, b = 7;

    printf("a=%d, b=%d\n", a, b);
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    printf("a=%d, b=%d\n", a, b);

    exit(0);
}