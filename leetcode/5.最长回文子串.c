/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include <string.h>
char *longestPalindrome(char *s)
{                           //"babad\0 -> bab||aba"
    int length = strlen(s); // 字符串的长度
    int n = length - 1;     // 滑块尺寸初始大小
    int left = 0, right;    // 滑块两个边界
    int zmaxlength;         // 最长回文子串的长度
    int head;
    char z[] = {'\0'}; // 返回值
    // 思路：大滑动窗口，依次减小
    for (; n > 0; n--) // 滑框进行减小的过程
    {
        for (; left < length - n; left++)
        {
            head = left;//记录此次的左边初始位置
            right = left + n; // 定义右边的大小
            while (s[left++] == s[right--])
            {
                if (left > right)
                {
                    for (int i = 0; i <= n; i++)
                    {
                        z[i] = s[head + i];
                    }
                    break;
                }
            }
        }
    }

    return z;
}
// @lc code=end
