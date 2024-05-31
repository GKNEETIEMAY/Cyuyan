/*
 * @lc app=leetcode.cn id=5 lang=c
 *
 * [5] 最长回文子串
 */

// @lc code=start
char z[1001] = {0}; // 全局变量最后能返回，不至于被销毁
char *longestPalindrome(char *s)
{
    int length = strlen(s);  // 字符串的长度,5->0,4
    int n;                   // 滑块尺寸初始大小->4
    int left, right;         // 滑块两个边界
    int head;                // 定义赋值是开始的位置
    memset(z, 0, sizeof(z)); // 清空z
    // 思路：大滑动窗口，依次减小
    if (length == 1)
    {
        z[0] = *s;
    }
    else
    {
        for (n = length - 1; n >= 0; n--) // 滑框进行减小的过程,最小到0（长度为一）
        {
            for (left = 0; left < length - n; left++) // 左边界所在的位置
            {
                // 记录此次的左边初始位置，防止后续比较发生改变，同样也记录成功后的起始位置
                head = left;
                right = left + n;           // 定义右边的大小
                while (s[left] == s[right]) // 如果是最长回文子串，能满足最终比较条件
                {
                    if (left >= right)
                    {
                        for (int i = 0; i <= n; i++) // 赋值
                        {
                            z[i] = *(s + head + i);
                        }
                        break;
                    }
                    left++;
                    right--;
                }
                left = head;        // 恢复原始的left指向的位置
                if (strlen(z) != 0) // 第一次出现最长子串后
                {
                    break;
                }
            }
            if (strlen(z) != 0)
            {
                break;
            }
        }
    }
    return z;
}
// @lc code=end
