/***
 * 练习：
 * 1.分数求和:1/1-1/2+1/3-1/4+...+1/99-1/100
 * 2.求最大值:十个数字中的最大值
 * 3.乘法口诀表
 */
#include <stdio.h>
#include <math.h>
//利用幂指数函数进行分数求和，解1
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
//冒泡排序求最大值，解2
int Bubble_sort()
{
    int arr[]={1,3,2,10,9,6,7,5,4,8};
    int max;
    
    return 0;
}
int main()
{

    Sum_fraction();
    printf("----------------分割线----------------------\n");
    return 0;
    //
}