#include <stdbool.h>
/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char *s)
{
    int n = strlen(s);
    if (n == 0)
        return 0;
    int charExists[256] = {0}; // 记录字符是否出现过的数组，所有字符均为ASCII编码
    int left = 0, right = 0;   // 滑动窗口的左右边界
    int maxLength = 0;         // 最长无重复子串的长度，初始0
    while (right < n)
    {
        if (charExists[s[right]] == 0)
        {
            // 如果字符仍未出现，则更新charExists数组并扩展右边界
            charExists[s[right]] = 1;
            maxLength = (right - left + 1) > maxLength ? (right - left + 1) : maxLength;
            right++;
        }
        else
        {
            // 如果字符已经出现，则移动左边界，并更新charExists数组
            charExists[s[left]] = 0;
            left++;
        }
    }
    return maxLength;
}
// @lc code=end