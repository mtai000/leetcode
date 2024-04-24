/*
 * @lc app=leetcode.cn id=392 lang=cpp
 *
 * [392] 判断子序列
 */

// @lc code=start
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (int  j = 0; i < s.size() && j < t.size();j++)
        {
            if (s[i] == t[j])
            {
                i++;
            }
        }
        if (i == s.size())
            return true;
        else
            return false;
    }
};
// @lc code=end

