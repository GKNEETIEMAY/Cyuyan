/*
 * @lc app=leetcode.cn id=80 lang=c
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    int slow=0,fast=1;//快慢指针组成滑块
    while(fast<numsSize-1)
    {
        //双指针对应不相等向后滑动一位
        if(nums[slow]!=nums[fast])
        {
            slow=slow+1;
            fast=fast+1;
        }
        //对应相等看fast后一位
        else{
            //后一位不等，即连续两个想等,向后滑动两位
            if(nums[fast+1]!=nums[fast])
            {
                slow=slow+2;
                fast=fast+2;
            }
            //后一位相等，即出现那种连续超过2位以上相等的
            else{
                //整体前移1位
                for(int i=fast+1;i<numsSize-1;i++){
                    nums[i]=nums[i+1];
                }
                //长度减1
                numsSize=numsSize-1;
            }
        }
    }
    return numsSize;
}
// @lc code=end

