/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = 0;
        int cnt = 0;
        for (int i = 0; i< nums.size(); i++)
        {
            if(!cnt)
            {
                maj = nums[i];
                cnt++;
            }
            else
                maj == nums[i] ? cnt++ : cnt--;

        } 
        return maj;
    }
};
// @lc code=end

