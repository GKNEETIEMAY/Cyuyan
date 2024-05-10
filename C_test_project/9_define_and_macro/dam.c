#include <stdio.h>
// define定义标识符常量
#define MAX 100
// define定义宏-带参数
#define ADD(x, y) ((x + y))
int main()
{
    int a = MAX;
    int b = 1, c = 1;
    printf("a=%d\n", a);
    printf("ADD(b,c)=%d\n", ADD(b, c));
    return 0;
}