/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int index = prices.size() - 1;
        for(int i = index - 1 ; i > -1 ; i--)
        {
            int tmp = prices[index] - prices[i];
            if(tmp < 0)
            {
                index = i;
                continue;
            }
            max = tmp > max ? tmp : max;
        }
        return max;
    }
};
// @lc code=end

