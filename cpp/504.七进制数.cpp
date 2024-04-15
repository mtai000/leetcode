/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        string t = "";
        
        if(num == 0) return "0";
        if(num < 0)
        {
            t = "-";
            num = -num;
        }
        while(num)
        {
            s+=num % 7 + '0';
            num = num/7;
        }

        for(int i = s.length(); i > 0; i--)
        {
            t+= s[i - 1];
        }
        return t;
    }
};
// @lc code=end

