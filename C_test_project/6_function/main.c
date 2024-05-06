// 函数
//
#include <stdio.h>
int MAX(int x,int y);//主函数在上时，要在最上方定义一下
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

int MAX(int x, int y)
{
    int a;
    if (x > y)
    {
        a = x;
        return a;
    }
    else
    {
        a = y;
        return a;
    }
}