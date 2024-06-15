/***
 * 练习：
 * 1.分数求和:1/1-1/2+1/3-1/4+...+1/99-1/100
 * 2.求最大值:十个数字中的最大值
 * 3.乘法口诀表
 */
#include <stdio.h>
#include <math.h>
// 利用幂指数函数进行分数求和，解1
int Sum_fraction()
{
    double sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum = sum + (1 / (pow(-1, i - 1) * i));
    }
    printf("%lf\n", sum);
    return 0;
}
// 冒泡排序求最大值，解2
int Bubble_sort()
{
    int arr[] = {1, 3, 2, 10, 9, 6, 7, 5, 4, 8};
    int temp;
    int length = (sizeof(arr) / sizeof(arr[0])); // 数组长度
    for (int i = 0; i < length - 1; i++)         // i为上标
    {
        for (int j = length - 1; j > i; j--) // 由于出现j-1判断故j要比i大于而不是大于等于
        {
            if (arr[j] > arr[j - 1]) // 交换位置
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("max=%d\n", arr[0]);
    return 0;
}
// 九九乘法口诀表，解3
int Multiply1()//左上
{
    for (int i = 1;i<=9;i++)
    {
        for (int j = i;j<=9;j++)
        {
            printf("%d*%d=%-2d\t",i,j,i*j);//%-2d两位左对齐
        }
        printf("\n");
    }
    return 0;
}
int Multiply2()//左下
{
    for (int i = 1;i<=9;i++)
    {
        for (int j = 1;j<=i;j++)
        {
            printf("%d*%d=%-2d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
int main()
{

    Sum_fraction();
    printf("----------------分割线----------------------\n");
    Bubble_sort();
    printf("----------------分割线----------------------\n");
    Multiply1();
    printf("----------------分割线----------------------\n");
    Multiply2();
    return 0;
    //
}