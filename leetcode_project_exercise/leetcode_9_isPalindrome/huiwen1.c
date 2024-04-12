#include<stdio.h>
#include<stdbool.h>
#include "huiwen.h"
int main()//void main写法过时了，void main不用返回值
{
    int x;
    bool y;
    printf("请你输入一个数字：\n");
    scanf("%d",&x);
    y=isPalindrome(x);
    return 0;
}
//int main 之后要结束函数需要返回一个整型变量，即return 0；与之呼应