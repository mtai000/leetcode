/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心下标
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum_r = 0;
        int sum_l = 0;
        for(int i = 0 ; i < nums.size(); i++)
            sum_r += nums[i];
        for(int i = 0 ; i < nums.size(); i++)
        {
            sum_l += nums[i];
            if(sum_l == sum_r)
                return i;
            sum_r -= nums[i];
        }

        return -1;
    }
};
// @lc code=end

