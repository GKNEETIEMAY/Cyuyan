/*
 * @lc app=leetcode.cn id=128 lang=c
 *
 * [128] 最长连续序列
 */

// @lc code=start
int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
//去有序数组的重复值
int removech(int *nums,int numsSize)
{
    int slow=0;
    int fast=1;
    while(slow<numsSize-1)
    {
        if(nums[slow+1]!=nums[slow])
        {
            nums[fast]=nums[slow+1];
            fast++;
        }
        slow++;
    }
    return fast;
}

int longestConsecutive(int* nums, int numsSize) {
    int count = 0;
    int return_count=0;
    if (numsSize == 0) {
        return 0;
    }
    qsort(nums, numsSize, sizeof(int),cmp);
    numsSize=removech(nums,numsSize);
    if (numsSize >= 2) {
        // 升序 
        int temp = nums[0];
        for (int i = 1; i < numsSize; i++) {
            if (temp + 1 == nums[i]) {
                count+=1;
                temp = nums[i];
                return_count=max(return_count,count+1);
            } else {
                count=0;
                temp=nums[i];
                return_count=max(return_count,count+1);
            }
        }
        return return_count;
    }
    else{
        return 1;
    }
}
// @lc code=end

