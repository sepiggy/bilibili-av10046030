#if 0
qsort(3) demo
#endif

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 20

static int func(const void *, const void *);

int
main(void)
{
    int i;
    int arr[ARR_SIZE] = {0};

    for (i = 0; i < ARR_SIZE; i++) {
        arr[i] = rand() % ARR_SIZE;
    }

    for (i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    qsort(arr, ARR_SIZE, sizeof(*arr), func);

    for (i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');

    exit(0);
}

static int
func(const void *a, const void *b)
{
    // return (*(int*)a)-(*(int*)b);
    return -((*(int*)a)-(*(int*)b));
}