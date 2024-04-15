/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v = {0};
        for(int i = 1 ; i <= n ; i++)
        {
            v.push_back(v[i>>1] + (i&1));
        }
        return v;
    }
};
// @lc code=end

