/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int n) {
        string title = "";
        while( n > 0)
        {
            if(n%26)
            {
                title.insert(0,1,'A' - 1 + n%26);
                n /= 26;
            }
            else
            {
                title.insert(0,1,'Z');
                n = n/26 - 1;
            }
            
        }
        return title; 
    }
};
// @lc code=end

