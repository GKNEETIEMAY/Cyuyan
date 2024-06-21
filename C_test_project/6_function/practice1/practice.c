// 1.判断一个数是否是素数
// 2.判断一年是不是闰年
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
// 闰年判断，函数里面判断
int Find_year(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    return 0;
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
    int year;
    printf("请输入你要判断的年份>");
    scanf("%d", &year);
    if (Find_year(year) == 1)
    {
        printf("%d是闰年\n", year);
    }
    else
    {
        printf("%d不是闰年\n", year);
    }
    return 0;
}