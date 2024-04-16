// 变量与常量
// 局部变量(local variable)、全局变量(global variable)
/***全局变量与局部变量的名字建议不要相同，相同容易产生bug
 * 当全局变量与局部变量的名字相同时，局部变量的名字优先
 * 局部变量的使用不能超过代码块（{}）***/

#include <stdio.h>
int n1 = 1; // 全局变量-定义在代码块（{}）外部的变量
int main()
{
    int n2 = 2; // 局部变量-定义在代码块（{}）内部的变量
    printf("%d\n", n2);
    //{int n3=3;}
    // printf("%d\n",n3);//此处报错：未定义标识符 "n3"
    printf("%d\n", n1);
    return 0;
}