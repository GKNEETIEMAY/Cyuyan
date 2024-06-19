// 函数：独立代码，完成特定任务的子程序。
#include <stdio.h>
int MAX(int x,int y);//主函数在上时，自己定义的函数要在最上方声明一下,或者整体就在上方
int main()
{
    int a, b, c;
    printf("请输入第一个数字：\n");
    scanf("%d", &a);
    printf("请输入第二个数字：\n");
    scanf("%d", &b);
    if (a - b == 0)
    {
        printf("两数值相等\n");
    }
    else
    {
        c = MAX(a, b);
        printf("较大值为:%d\n", c);
    }
    return 0;
}
int MAX(int x, int y)//比较大小函数
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}