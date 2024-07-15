/*
 * @lc app=leetcode.cn id=11 lang=c
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
int max(int a, int b) {  
    return a >= b ? a : b;  
}  
int min(int a, int b) {  
    return a <= b ? a : b;  
}  
int maxArea(int* height, int heightSize) {  
    int left = 0, right = heightSize - 1;  
    int maxArea = 0;  
    while (left < right) {  
        int currentArea = min(height[left], height[right]) * (right - left);  
        maxArea = max(maxArea, currentArea);  
        if (height[left] < height[right]) {  
            left++; // 移动较低的那个指针  
        } else {  
            right--; // 否则移动较高的那个指针  
        }  
    }  
    return maxArea;  
}
// @lc code=end

