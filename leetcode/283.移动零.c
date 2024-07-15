/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start
void moveZeroes(int* nums, int numsSize) {
    int low;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==0){
            low=i;
            while(low<numsSize-1)
            {
                nums[low]=nums[low+1];
                low++;
            }
            nums[numsSize-1]=0;
            numsSize--;
            i=i-1;
        }
    }
    
}
// @lc code=end

