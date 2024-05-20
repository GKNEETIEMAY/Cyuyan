// 练习：判断1-100之内的奇数，并输出
#include <stdio.h>
int main()
{
    int i = 1;
    int a;
    for (; i <= 100; i++)
    {
        a = i % 2;  // 奇数的模2运算结果为1
        if (a == 1) // 判断是否为奇数
        {
            printf("1-100的奇数:%d\n", i);
        }
    }
    return 0;
}