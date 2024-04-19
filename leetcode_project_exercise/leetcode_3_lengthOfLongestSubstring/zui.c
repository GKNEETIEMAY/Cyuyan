#include <string.h>
#include <stdio.h>
int lengthOfLongestSubstring(char *s)
{
    char *a = s;
    int i, j, lon, m, n;
    lon = strlen(a) - 1; // 输入的字符串数组除去\0的长度
    m = 0;               // 计数
    printf("%d\n", lon);
    n = lon; // 滑框尺寸
    for (; n < 1; n--)
    {
        for (i = 0; i <= lon - n; i++)
        {
            for (j = i + n; j > i; j--)
            {
                if (a[i] != a[j])
                {
                    m = m + 1;
                }
                if (m == n)
                {
                    printf("%d\n", m);
                    break;
                }
            }
        }
    }
    return m;
}