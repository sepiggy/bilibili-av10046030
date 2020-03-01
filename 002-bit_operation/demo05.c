#if 0
验证: 若`a^b=c`, 则`c^b=a`及`c^a=b`
#endif

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int
main(void)
{
    int a = 0x1234;
    int b = 0x5678;
    int c = a ^ b;

    assert((c^b) == a);
    assert((c^a) == b);

    exit(0);
}