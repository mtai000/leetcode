/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
 */

// @lc code=start
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = duration;
        for(int i = 0 ; i < timeSeries.size() - 1;i++)
        {
            sum += timeSeries[i+1] - timeSeries[i] < duration ?  timeSeries[i+1] - timeSeries[i] : duration;
        }
        return sum;
    }
};
// @lc code=end

