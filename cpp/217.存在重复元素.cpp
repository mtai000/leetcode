/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(!nums.size()) return false;
        std::map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(mp[nums[i]])
                return true;
            mp[nums[i]] = 1;
        }
        return false;
    }
};
// @lc code=end

