#if 0
将某整数的低8位全部置0, 而其余位不变
#endif
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n = 0x1234;

    printf("n=%#x\n", n);
    printf("n&0xffffff00=%#x\n", n&0xffffff00);

    exit(0);
}