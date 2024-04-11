#include<stdio.h>
#include<stdbool.h>
#include "huiwen.h"
void main()
{
    int x;
    bool y;
    printf("请你输入一个数字：\n");
    scanf("%d",&x);
    y=isPalindrome(x);
}