/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int max = 0x80000000;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            sum += nums[i];
            if(nums[i] > max)
            {
                max = nums[i];
            }
            if(sum < 0)
            {
                sum = 0;
            }
            else
            {
                if(sum > max)
                {
                    max = sum;
                }
            }
        }
        return max;
    }
};
// @lc code=end

