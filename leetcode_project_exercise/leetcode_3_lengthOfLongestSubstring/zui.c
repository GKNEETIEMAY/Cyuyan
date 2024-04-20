#include <string.h>
#include <stdio.h>
#include<stdbool.h>
bool ACU(char *str){
    bool charexit[256]={false};
    while(*str != 0){
        unsigned char c=(unsigned char)*str;
        if(charexit[c])
        {return false;//有重复
        }
        charexit[c]=true;
        str++;
    }
    return true;//无重复
}
int lengthOfLongestSubstring(char *s)
{
    char *a = s;
    int i, j, lon, m, n;
    char *o;
    int p = 0;
    //int charExists[256] = {0}; // 初始化一个数组来记录字符是否出现过，默认为0（false）
    //bool allUnique = true;     // 假设所有字符都是唯一的
    lon = strlen(a) - 1;       // 输入的字符串数组的长度
    m = 0;                     // 
    n = lon;                   // 滑框尺寸
    if (n < 0)                 // 防止出现""
    {
        return m;
    }
    else
    {
        for (; n >= 0; n--)
        {
            printf("滑框长度为:%d\n", n + 1);
            for (i = 0; i <= lon - n; i++) // 滑框头
            {
                printf("从a[%d]的尾巴开始，依次是\n", i);
                for (p = 0, j = i + n; j >= i; j--) // 滑框尾
                {
                    printf("%c\n", a[j]);
                    o[p] = a[j];
                    p = p + 1;
                }
                o[p] = 0;//加字符串结尾
                printf("%s\n", o);
                //////////////////
                if(ACU(o))
                {
                    return n+1;
                }
                
                /////////////////
                for (; p >= 0; p--) // 清空字符串
                {
                    o[p] = 0;
                }
            }
        }
    }
}
