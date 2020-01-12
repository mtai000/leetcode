/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel表列序号
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string s) {
        
        int sum = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            sum = s.at(i) - 'A' + 1 + sum * 26;
        }
        return sum; 
    }
};
// @lc code=end

