// 关键字:不能跟变量名字冲突
// auto:
// break
// extern:声明外部符号
// float
// for
// sizeof
// case
// char
// const
// continue
// default
// do
// double
// else
// enum
// goto
// if
// it
// long
// register
// return
// short
// signed
// static:修饰静态变量和静态函数
// struct
// switch
// typedef:类型定义，可理解为类型重命名，ex:typedef unsigned int unit_32
// union
// unsigned:无符号
// void
// volatile
// while
// 注意define不是一种关键字
#include <stdio.h>
extern int Add(int a, int b);//声明外部函数
// static修饰局部变量时
void test()
{
    int a = 1;        // 会被销毁
    static int b = 1; // b是一个静态局部变量，不会被销毁，局部变量的!生命周期变长!
    a++;
    b++;
    printf("注意比较\n");
    printf("int a=%d\n", a);        // 2，2，2，2，2
    printf("static int b=%d\n", b); // 2，3，4，5，6
}
int main()
{
    int a=1,b=1,sum;
    
    // int float;//err

    // 关键字typedef
    typedef unsigned int unit_32;
    unsigned int n1 = 1;
    unit_32 n2 = 1; // n1 = n2
    if (n1 == n2)
    {
        printf("重命名后,n1==n2\n");
    }

    // 关键字static
    for (int i = 0; i < 5; i++)
    {
        test();
    }

    // 关键字extern
    extern int g_val1;
    // extern int g_val2;
    printf("g_val1=%d\n", g_val1);
    // printf("g_val2=%d\n", g_val2);//err，g_val2 是static修饰
    sum=Add(a,b);
    printf("sum = %d\n",sum);

    return 0;
}