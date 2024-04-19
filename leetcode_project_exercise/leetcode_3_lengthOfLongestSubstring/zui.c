#include <string.h>
#include <stdio.h>
int lengthOfLongestSubstring(char *s)
{
    char *a = s;
    int i, j, lon, m, n;
    lon = strlen(a) - 1; // 输入的字符串数组的长度
    m = 0;               // 计数
    n = lon; // 滑框尺寸
    if (n < 0)          //防止出现""
    {
        return m ;
    }
    else
    {
        for (; n > 1; n--)
        {
            printf("滑框长度为:%d\n",n);
            for (i = 0; i <= lon - n; i++)
            {
                printf("从a[%d]开始\n",i);
                for (m = 0, j = i + n; j > i; j--)
                {
                    if (a[i] != a[j])
                    {
                        m = m + 1;
                        printf("m=%d\n", m);
                    }
                    if (m == n)
                    {
                        printf("此时的m==n,m+1=%d\n", m+1);//c此处有问题
                        return m+1;
                    }
                }
            }
        }
        return m+1;
    }
}