#include <string.h>
#include <stdio.h>
int lengthOfLongestSubstring(char *s)
{
    char *a = s;
    int i, j, l, m;
    l = strlen(a) - 1; // 输入的字符串数组除去\0的长度
    m=l;
    for (;m==0;m--)
    {
        for (i = 0; i < l; i++)
        {
            for (j = l; j > i; j--)
            {
                if (a[i] == a[j])
                {
                    l = l - 1;
                }
            }
        }
    }
    return l;
}