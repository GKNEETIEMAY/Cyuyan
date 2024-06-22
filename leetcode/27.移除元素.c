/*
 * @lc app=leetcode.cn id=27 lang=c
 *
 * [27] 移除元素
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int k=numsSize;//返回数量
    //空数组
    if(numsSize==0)
    {
        return k;
    }
    int nums2[numsSize];//定义第二替换个数组
    //原地移除
    for(int i=0;i<numsSize;i++){
        if(nums[i]==val){
            nums[i]=-1;
            k--;
        }
    }
    //将数据整体迁移不留空
    for(int i =0,j=0;i<numsSize;i++)
    {
        if(nums[i]!=-1)
        {
            nums2[j]=nums[i];
            j++;
        }
    }
    //替换给nums
    for(int i=0;i<numsSize;i++){
        nums[i]=nums2[i];
    }
    return k;
    
}
// @lc code=end

