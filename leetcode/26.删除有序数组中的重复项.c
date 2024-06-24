/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    int slow=0;//慢指针
    int fast=1;//快指针
    for(slow=0;slow<numsSize-1;slow++)
    {
        if(nums[slow+1]!=nums[slow])//如果慢指针后一个元素与其不相等
        {
            nums[fast]=nums[slow+1];//快指针就等于其后面那个数字
            fast++;
        }
    }
    return fast;
}
// @lc code=end

