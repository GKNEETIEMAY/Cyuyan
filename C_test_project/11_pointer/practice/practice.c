/***
 * 牛客：明明的随机数
 */
#include <stdio.h>
//冒泡排序
int B_sort(int* nums, int numsSize) {
    int temp;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = numsSize - 1; j > i; j--) {
            if (nums[j] < nums[j - 1]) {
                temp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = temp;
            }
        }
    }
    return 0;
}
//删除重复数字-哈希
int Del(int* nums, int numsSize) {
    int hash[500];
    int n[numsSize];
    for (int i = 0; i < 500; i++) {
        hash[i] = 0;
    }
    //哈希，第2次以上重复的给标记-1
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]] = hash[nums[i]] + 1;
        if (hash[nums[i]] > 1) {
            nums[i] = -1;
        }
    }
        //整理数组,遇见-1，左移一位。
    int j=0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i]!= -1) {
            n[j]=nums[i];
            j++;
            }
        }
    for (int i = 0; i < j; i++)
    {
        nums[i]=n[i];
    }
    return j;
}
int main() {
    int numsSize;//第一个数据N，即含有几个数字
    scanf("%d", &numsSize);
    int num[numsSize];//定义数组
    //输入数据
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &num[i]);
    }
    int* nums = num;
    numsSize = Del(nums, numsSize);
    B_sort(nums, numsSize);
    for (int i = 0; i < numsSize; i++) {
        printf("%d\n", num[i]);
    }
    return 0;
}