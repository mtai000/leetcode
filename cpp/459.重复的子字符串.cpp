/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() <= 1)
            return false;
        int len = s.length();
        for(int i = 1; i <= len/2; i++)
        {
            if(len % i == 0)
            {
                bool flag = true;
                //cout << i << endl;
                for(int k = i; k < len ;k++)
                {
                    //cout << k << i << endl;
                    //cout << s[k] << s[k-i] << endl;
                    if(s[k] != s[k-i])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                    return true;
            }
        }   
        return false;
    }
};
// @lc code=end

