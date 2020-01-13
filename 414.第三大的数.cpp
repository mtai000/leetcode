/*
 * @lc app=leetcode.cn id=414 lang=cpp
 *
 * [414] 第三大的数
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> max;
        max.push_back( nums[0] );
        for (int i = 1 ; i< nums.size(); i++)
        {
            for (int j = 0 ; j < max.size() ; j++)
            {
                if(nums[i] == max[j])
                    break;
                if(nums[i] > max[j])
                {
                    max.insert(max.begin() + j , nums[i]);
                    if(max.size() == 4)
                        max.pop_back();
                    break;
                }
                if( j == max.size() - 1 && j < 2)
                {
                    max.push_back(nums[i]);
                    break;
                }
            }
            for(int j = 0; j < max.size() ; j++)
            {
                cout << max[j];
            }
            cout << endl;
        }
        return (max.size() == 3) && (max[2] != max[1]) ? max[2] : max[0];
    }
};
// @lc code=end

