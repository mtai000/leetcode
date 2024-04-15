/*
 * @lc app=leetcode.cn id=2395 lang=cpp
 *
 * [2395] 和相等的子数组
 */

// @lc code=start
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        for(int i = 0 ; i< nums.size() - 1; i++)
            for(int j = i + 1; j < nums.size(); j++)
                
        return false;
    }
};

/*
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        for(int i = 0 ; i< nums.size() - 2; i++)
            for(int j = i + 1; j < nums.size() - 1; j++)
                if(nums[i] + nums[i + 1] == nums[j] + nums[j+1])
                    return true;
        return false;
    }
};
*/
// @lc code=end

