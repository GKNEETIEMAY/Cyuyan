/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int** threeSum(int* nums, int numsSize, int* returnSize,
               int** returnColumnSizes) {
    if (numsSize < 3) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }
    int** three = (int**)malloc(numsSize * numsSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numsSize * numsSize * sizeof(int));
    *returnSize = 0;
    int three_size = 0;
    // 排序
    qsort(nums, numsSize, sizeof(int), cmp);
    int sum = 0; // i+j+k；
    for (int i = 0; i < numsSize - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        if(nums[i]+nums[i+1]+nums[i+2]>0)
        {
            break;
        }
        if(nums[i]+nums[numsSize-1]+nums[numsSize-2]<0)
        {
            continue;
        }
        int j = i + 1;
        int k = numsSize - 1;
        while (j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0) {
                three[three_size] = (int*)malloc(3 * sizeof(int));
                (*returnColumnSizes)[three_size] = 3;
                three[three_size][0] = nums[i];
                three[three_size][1] = nums[j];
                three[three_size][2] = nums[k];
                j += 1;
                while (j < k && nums[j] == nums[j - 1]) {
                    j = j + 1;
                }
                k -= 1;
                while (k > j && nums[k] == nums[k + 1]) {
                    k = k - 1;
                }
                three_size++;
            } else if (sum > 0) {
                k -= 1;
            } else {
                j += 1;
            }
        }
    }
    *returnSize = three_size;
    return three;
}
// @lc code=end

