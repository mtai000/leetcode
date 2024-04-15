/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> rtn;
        for(int i = 0 ; i < nums.size(); i++)
        {   
            int pos = (nums[i] < 0? -nums[i]: nums[i]) - 1;
            //cout << pos << endl;
            if(nums[pos] > 0)
                nums[pos] = -nums[pos];
        }
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] > 0)
                rtn.push_back(i + 1);
        }
        return rtn;
    }
};
// @lc code=end

