// 1.判断一个数是否是素数
#include <stdio.h>
#include <math.h>
// 试除法判断
int Is_Prime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a; // 定义需要判断的数字
    printf("请输入你要判断的数字>");
    scanf("%d", &a);
    if (Is_Prime(a) == 1)
    {
        printf("%d是素数\n", a);
    }
    else
    {
        printf("%d不是素数\n", a);
    }
    return 0;
}