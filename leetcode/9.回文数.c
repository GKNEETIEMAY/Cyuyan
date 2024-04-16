/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start
#include <stdbool.h> //bool变量的函数定义，在此编译器中必须要用“stdbool.h”头文件
bool isPalindrome(int x)
{
    int a, b = 0, j = 10, d;
    int c[25];
    a = x;
    if (a < 0) // 判断如果是负数，直接pass
    {
        printf("false");
        return false;
    }
    else
    {
        while (a >= 10)
        {
            a = a / 10;
            b = b + 1;
        }
        b = b + 1;                   // 以上统计给出的int型变量的位数
        d = b;                       // 计数器，为c[i]的量
        for (int i = 1; i <= b; i++) // 分别将个位，十位......复制到以c[1]开头的数组中，c[0]为空
        {
            c[i] = x % j; // 求余数
            x = x / j;    // 减位数
        }
        for (int k = 1; k <= b / 2 + 1; k++, d--) // k<=b/2+1，考虑到奇数位数的情况下，分别比较两端的位数
        {
            if (c[k] != c[d])
            {
                printf("false");
                return false;
            }
        }
        printf("true");
        return true;
    }
}
// @lc code=end
