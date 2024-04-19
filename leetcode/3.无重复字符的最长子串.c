/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
int lengthOfLongestSubstring(char *s)
{
    char *a = s;
    int i, j, lon, m, n;
    lon = strlen(a) - 1; // 输入的字符串数组的长度
    m = 0;               // 计数
    n = lon; // 滑框尺寸
    printf("%d\n", lon);
    if (lon < 0)
    {
        return m;
    }
    else
    {
        for (; n > 1; n--)
        {
            for (i = 0; i <= lon - n; i++)
            {
                for (m = 0, j = i + n; j > i; j--)
                {
                    if (a[i] != a[j])
                    {
                        m = m + 1;
                    }
                    if (m == n)
                    {
                        break;
                    }
                }
            }
        }
        return m+1;
    }
}
// @lc code=end
