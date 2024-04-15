/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        bool isMov = false;
        for(int i = nums.size() -  1 ; i > -1 ; i--)
        {
            if(nums[i] == 0 )
            {
                if(isMov)
                {
                    nums.erase(nums.begin() + i,nums.begin() + i + 1);
                    nums.push_back(0);
                    isMov == false;
                }
            }
            else
            {
                isMov = true;
            }
            
        } 
    }
};
// @lc code=end

