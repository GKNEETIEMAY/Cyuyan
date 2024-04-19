#include <stdio.h>
#include <string.h>
#include "max.h"
#include "min.h"
int main()
{
    int a = 10, b = 2;
    int c, d, e;
    char *s1 = "abcabcbb";
    char s2[] = "abcabcbb";
    char arr[] = {};
    e = strlen(s1);
    printf("%d\n",e);
    if (s1 == s2)
        printf("true\n");
    else
        printf("false\n");

    printf("%c\n", s1[0]);


    c = Max(a, b);
    d = Min(a, b);
    printf("hello world!*****************\n");
    printf("(good morning)");
    printf("%d\n", c);
    printf("%d\n", d);
    return 0;
}