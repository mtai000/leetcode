/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int checkline[128] = {0};
        string s[6] = {"qwertyuiop","asdfghjkl","zxcvbnm",
                       "QWERTYUIOP","ASDFGHJKL","ZXCVBNM"};
        for(int i = 0 ; i < 6; i++)
        {
            for(int j = 0;j< s[i].size();j++)
            {
                checkline[s[i][j]] = i%3 + 1;
            }
        }

        for(int i = words.size() - 1 ; i > -1 ; i--)
        {
            bool isDiffLine = 0;
            int whichline = checkline[words[i][0]]; 
            for(int j = 1 ; j < words[i].size() ; j++)
            {

                if( checkline[words[i][j]] != whichline )
                {    
                    isDiffLine = 1 ;
                    break;
                }
            }
            if(isDiffLine)
            {
                words.erase(words.begin() + i , words.begin() + i + 1);
            }
        } 
        return words;
    }
};
// @lc code=end

