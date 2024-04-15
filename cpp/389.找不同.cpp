/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum = 0;
        int i = 0;
        for( ; i < s.length();i++)
        {
            sum += t[i] - s[i];
        }
        sum += t[i];
        return char(sum);
    }
};
// @lc code=end

