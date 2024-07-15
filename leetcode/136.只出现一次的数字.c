/*
 * @lc app=leetcode.cn id=136 lang=c
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
int cmp(const void* a, const void* b) { return (*(int*)a) - (*(int*)b); }
int singleNumber(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    if (numsSize == 1) {
        return nums[0];
    }
    qsort(nums, numsSize, sizeof(int), cmp);
    if(nums[0]!=nums[1])
    {
        return nums[0];
    }
    if(nums[numsSize-1]!=nums[numsSize-2])
    {
        return nums[numsSize-1];
    }
    for (int i = 1; i < numsSize-1; i++) {
        if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
        {
            return nums[i];
        }
    }
    return 0;
}
// @lc code=end

