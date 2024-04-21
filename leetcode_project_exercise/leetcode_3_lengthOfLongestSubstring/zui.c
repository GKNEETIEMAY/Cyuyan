#include <string.h>
#include <stdio.h>
#include <stdbool.h>
int lengthOfLongestSubstring(char *s)//时间复杂度太高
{
    char *a = s;
    int i, j, lon, m, n, k;
    char *o = {0};
    int p = 0;
    int charExists[256] = {0}; // 初始化一个数组来记录字符是否出现过，默认为0（false）
    bool allUnique = false;    // 假设所有字符都是唯一的
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
                    charExists[a[j]] = charExists[a[j]] + 1;
                }
                // printf("%s\n", o);
                for (k = 0; k < 256; k++)
                {
                    if (charExists[k] > 1)
                    {
                        allUnique = false;
                        break;
                    }
                    allUnique = true;
                }
                //////////////////
                if (allUnique)
                {
                    return n + 1;
                }
                for (k = 0; k < 256; k++)
                {
                    charExists[k] = 0;
                }
            }
        }
    }
}
