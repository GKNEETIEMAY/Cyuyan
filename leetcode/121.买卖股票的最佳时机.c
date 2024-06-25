/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
int maxProfit(int* prices, int pricesSize) {  
    if (pricesSize == 1) {  
        return 0; // 如果只有一个价格，则无法交易，利润为0  
    }  
    int minPrice = prices[0]; // 初始化最低价格为第一个价格  
    int maxProfit = 0; // 初始化最大利润为0  
    for (int i = 1; i < pricesSize; i++) {  
        // 如果当前价格比已知的最低价格还低，则更新最低价格  
        if (prices[i] < minPrice) {  
            minPrice = prices[i];  
        } else {  
            // 否则，计算当前价格与最低价格的差值，并更新最大利润
            int profit = prices[i] - minPrice;  
            if (profit > maxProfit) {  
                maxProfit = profit;  
            }  
        }  
    }  
    return maxProfit;  
}
// @lc code=end

