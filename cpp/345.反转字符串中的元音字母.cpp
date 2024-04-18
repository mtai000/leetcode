/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
            return true;
        else return false;
    }
    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (isVowel(s[i]))
                if (isVowel(s[j]))
                {
                    s[i] = s[i] ^ s[j];
                    s[j] = s[i] ^ s[j];
                    s[i] = s[i] ^ s[j];
                    i++;
                    j--;
                }
                else
                    j--;
            else
                i++;
        }
        return s;
    }
};
// @lc code=end

