/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
int lengthOfLongestSubstring(char *s)
{
    char arr1[] = s;
    int i, j, l;
    l = sizeof(arr1) - 2; // 输入的字符串数组除去\0的长度
    for (i = 0; i < l; i++)
    {
        for (j = l; j > i; j--)
        {
            if (arr1[i] = arr1[j])
            {
                continue;
            }
            else
                return j - i;
        }
    }
}
// @lc code=end
