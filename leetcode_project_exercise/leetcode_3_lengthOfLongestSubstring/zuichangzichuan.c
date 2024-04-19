#include<stdio.h>
#include"zui.h"
int main(){
    char *s="abcb";
    int a;
    printf("%s\n",s);
    a=lengthOfLongestSubstring(s);
    printf("%d\n",a);
    return 0;
}