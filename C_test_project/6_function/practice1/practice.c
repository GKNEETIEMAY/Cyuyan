// 1.判断一个数是否是素数
// 2.判断一年是不是闰年
// 3.写一个函数，每调用一次该函数，使num加1
// 4. 接收一个无符号数字，按顺序输出其每位
//5.求字符串长度。
//6.高效求斐波那契数列：1,1,2,3,5,8,13,21,34...
#include <stdio.h>
#include <math.h>
// 试除法判断，解1
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
// 闰年判断，函数里面判断，解2
int Find_year(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    return 0;
}
// 每次调用加1，解3
int Plus_one(int *x)
{
    *x = *x + 1; // 或者(*p)++
    return *x;
}
// 递归算法，解4
void Output_wei(unsigned int x)
{
    if (x > 9)
    {
        Output_wei(x / 10);
    }
    printf("%d\n", x % 10);
}
//求字符串长度，解5
//法1：用数组也可以
int my_len1(char *str){
    int count=0;//初始长度为0
    while (str[count]!='\0')
    {
        count++;
    }
    return count;
    
}
//法2：用指针
int my_len2(char *str){
    int count=0;//初始长度为0
    while (*str!='\0')
    {
        count++;
        str++;
    }
    return count;
    
}
//迭代(循环)+递归求斐波那契数列，解6
int Fib(int num){
    if (num<=2)
    {
        return 1;
    }
    else{
        for (int i = num; i ; i--)
        {
            /* code */
        }
        
    }
    
    return 0 ;
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
    printf("----------------分割线----------------------\n");
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
    printf("----------------分割线----------------------\n");
    int num1 = 0;
    int *p = &num1;
    while (num1 < 10)
    {
        Plus_one(p);
        printf("%d\n", num1);
    }
    printf("----------------分割线----------------------\n");
    unsigned int num2 = 1234;
    Output_wei(num2);
    printf("----------------分割线----------------------\n");
    char arr[]="niu bi!";//7
    int len1,len2;
    char *parr=arr;
    len1=my_len1(parr);//数组模式
    len2=my_len2(arr);//指针模式
    printf("len1=%d\n",len1);
    printf("len2=%d\n",len2);
    printf("----------------分割线----------------------\n");
    int num3,num4;
    printf("请输入要求的第n个斐波那契数列>");
    scanf("%d",&num3);
    num4=Fib(num3);
    printf("第%d个斐波那契数列数是%d\n",num3,num4);
    printf("----------------分割线----------------------\n");
    int num5;
    scanf("%d",&num5);
    printf("%d",num5);
    return 0;
}