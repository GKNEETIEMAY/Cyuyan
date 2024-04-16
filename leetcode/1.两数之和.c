/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// 参数注释：
// nums：给定输入数组名;
// numsSize：输入数组长度;
// target：目标值;
// returnSize：返回结果数组的长度，只能是0 or 2;
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *temp = (int *)malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                temp[0] = i;
                temp[1] = j;
                *returnSize = 2;
                return temp;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
// @lc code=end
