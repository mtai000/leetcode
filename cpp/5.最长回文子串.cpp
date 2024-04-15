/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2 ) return s;
        if(s.size() == 2)
            if(s[0] != s[1])
                return s.substr(0,1);
            else
                return s; 
        string returnstr = "";
        return returnstr;
    }
};
// @lc code=end

