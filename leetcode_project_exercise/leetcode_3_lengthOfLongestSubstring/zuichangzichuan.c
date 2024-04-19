#include<stdio.h>
#include"zui.h"
int main(){
    char *s="abcabcbb";
    int a;
    printf("%s\n",s);
    a=lengthOfLongestSubstring(s);
    printf("%d\n",a);
    return 0;
}