/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        int lens = nums.size();
        if(!lens) return 0;
        int dp[nums.size() + 1] = {0}; 
        dp[0] = 0;
        dp[1] = nums[0];
        for( int i = 2; i <= nums.size(); i++)
        {
            dp[i] = max(dp[i-1] , dp[i-2] + nums[i - 1]);
        }
        return dp[lens];
    }
};
// @lc code=end

