#include<stdio.h>
#include"zui.h"
int main(){
    char *s="abcde";
    int a;
    printf("%s\n",s);
    a=lengthOfLongestSubstring(s);
    printf("结束:%d\n",a);
    return 0;
}