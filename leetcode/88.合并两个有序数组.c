/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
// 归并排序
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int nums3Size = m + n;               // 定义合并后的数组长度
    int left = 0, middle = 0, right = 0; // left对应1，right对应2，middle对应3
    int nums3[nums3Size];                // 定义合并后的数组
    int i, j;                            // 定义中位数左右两边的数字的下标
    // 归并排序
    for (; middle < nums3Size;)
    {
        if (left < m && right < n) // 如果两个合并前的有序数组均从小于两者最大长度开始比较
        {
            if (nums1[left] < nums2[right]) // 哪个小哪个进入合并的数组
            {
                nums3[middle] = nums1[left];
                middle = middle + 1;
                left = left + 1;
                continue;
            }
            else if (nums1[left] == nums2[right]) // 稳定的排序算法
            {
                nums3[middle] = nums1[left];
                nums3[middle + 1] = nums2[right];
                middle = middle + 2;
                left = left + 1;
                right = right + 1;
                continue;
            }
            else
            {
                nums3[middle] = nums2[right];
                middle = middle + 1;
                right = right + 1;
                continue;
            }
        }
        // 数组1空，将数组2剩余的复制到数组3中
        else if (left >= m)
        {
            nums3[middle] = nums2[right];
            middle++;
            right++;
            continue;
        }
        // 数组2空，将数组1剩余的复制到数组3中
        else if (right >= n)
        {
            nums3[middle] = nums1[left];
            middle++;
            left++;
            continue;
        }
    }
    for (int k = 0; k < nums3Size; k++)
    {
        nums1[k] = nums3[k];
    }
}
// @lc code=end
