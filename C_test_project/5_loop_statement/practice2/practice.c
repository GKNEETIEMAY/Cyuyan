/***
 * 练习：
 * 1.分数求和:1/1-1/2+1/3-1/4+...+1/99-1/100
 * 2.求最大值
 * 3.乘法口诀表
 */
#include <stdio.h>
#include <math.h>
int Sum_fraction()
{
    double sum=0;
    for(int i=1;i<=100;i++)
    {
        sum=sum+(1/(pow(-1,i-1)*i));
    }
    printf("%lf\n",sum);
    return 0;
}
int main()
{
    Sum_fraction();
    return 0;
    //
}