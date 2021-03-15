/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        nums.insert(nums.begin(),nums.begin() + size - k,nums.end());
        nums.erase(nums.begin() + size , nums.end());

    }
};
// @lc code=end

