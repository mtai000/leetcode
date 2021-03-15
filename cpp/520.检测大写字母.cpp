/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isUpChar = isUp(word[word.size() - 1]);
        for(int i = word.size() - 1 ; i > -1 ; i--)
        {
            if(isUpChar)
            {
                if( !isUp(word[i]))
                    return false;
            }
            else
            {
                if(  i && isUp(word[i]))
                    return false;
            }
        } 
        return 1;
    }

    bool isUp(char c)
    {
        return c <= 'Z';
    }
};
// @lc code=end

