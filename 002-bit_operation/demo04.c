#if 0
将int型变量n的低八位取反, 而其余位不变
#endif

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n = 0x1234;

    printf("n=%#x\n", n);
    printf("n^0xff=%#x\n", n^0xff);

    exit(0);
}