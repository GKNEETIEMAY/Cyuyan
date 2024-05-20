// 语法结构
/***
 *1.if单分支:
 * if(表达式) //成立才执行，否则不执行。{}加上更好
 *     语句;
 * 2.if双分支:
 * if(表达式)
 *     语句1;
 * else
 *     语句2;
 * 3.if多分支:
 * if(表达式1)
 *     语句1;
 * else if(表达式2)
 *     语句2;
 *     ...
 * else
 *     语句3;
 * 4.switch语句:
 */
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 5;
    int b = 6;
    int age=100;
    bool c;
    // if单分支
    if (a > 1)
    {
        printf("a>1\n");
    }
    c = a > b ? true : false;
    // if双分支
    if (c)
    {
        printf("big a\n");
    }
    else
    {
        printf("big b\n");
    }
    // if多分支
    if (age<18)
        printf("未成年\n");
    else if (age<=18&&age<23) 
        printf("青年\n");
    else if (age<=23&&age<50) 
        printf("壮年\n");
    else if (age<=50&&age<80) 
        printf("老年\n");
    else
        printf("老不死\n");
    //switch case分支
    return 0;
}