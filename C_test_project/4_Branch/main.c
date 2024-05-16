//语法结构
/***
 *1.if单分支:
 * if(表达式)：//成立才执行，否则不执行
 *     语句;
 * 2.if双分支:
 * if(表达式)：
 *     语句1;
 * else：
 *     语句2;
 * 3.if多分支:
 * if(表达式1)：
 *     语句1;
 * else if(表达式2)：
 *     语句2;
 * else：
 *     语句3;
 */
#include<stdio.h>
#include<stdbool.h>
int main(){
    int a=5;
    int b=6;
    bool c;
    c=a>b?true:false;
    if(c){
        printf("big a\n");
    }
    else
    {
        printf("big b");
    }
    return 0;
}