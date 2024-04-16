#include <stdio.h>
#include "max.h"
#include "min.h"
int main()
{
    int a = 10, b = 2;
    int c, d;
    c = Max(a, b);
    d = Min(a, b);
    printf("hello world!\n");
    printf("(good morning)");
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}