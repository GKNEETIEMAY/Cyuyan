/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int nums3Size = nums1Size + nums2Size; // 定义合并后的数组长度
    int left = 0, middle = 0, right = 0;   // left对应1，right对应2，middle对应3
    int nums3[nums3Size];                  // 定义合并后的数组
    int i, j;                              // 定义中位数左右两边的数字的下标
    double median;
    // 归并排序
    for (; middle < nums3Size;)
    {
        if (left < nums1Size && right < nums2Size)
        {
            if (nums1[left] < nums2[right])
            {
                nums3[middle] = nums1[left];
                middle++;
                left++;
            }
            else if (nums1[left] == nums2[right])
            {
                nums3[middle] = nums1[left];
                nums3[middle + 1] = nums1[right];
                middle = middle + 2;
                left++;
                right++;
            }
            else
            {
                nums3[middle] = nums1[right];
                middle++;
                right++;
            }
        }
        //数组1空
        else if (left>=nums1Size)
        {
            nums3[middle]=nums2[right];
            middle++;
            right++;
        }
        //数组2空
        else if (right>=nums2Size)
        {
            nums3[middle]=nums1[left];
            middle++;
            left++;
        }   
    }
    // 寻找两个正序数组的中位数,需要判断合并数组的下标和是奇数还是偶数
    // 奇数个->最后一个下标偶数：12345->0-4->num/2->4/2=2
    // 偶数个->最后一个下标奇数：123456->0-5->num/2,num/2+1->5/2=2,3
    // 如果是奇数个
    if (nums3Size % 2 == 1)
    {
        i = (nums3Size - 1) / 2;
        j = i;
        median = (nums3[i] + nums3[j]) / 2;
    }
    // 如果是偶数个
    if (nums3Size % 2 == 1)
    {
        i = (nums3Size - 1) / 2;
        j = i + 1;
        median = (nums3[i] + nums3[j]) / 2;
    }
    return median;
}
// @lc code=end
