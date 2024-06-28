/*
 * @lc app=leetcode.cn id=509 lang=c
 *
 * [509] 斐波那契数
 */

// @lc code=start

//纯递归
int fib(int n){
    if(n==1){
        return 1;
    }
    else if (n==0)
    {
        return 0;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }

}
// @lc code=end

