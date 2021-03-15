/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        vector<int>::iterator it;
        for(it = nums.begin();it != nums.end();it++)
        {
            sum ^= *it;
        }
        return sum;
    }
};
// @lc code=end

