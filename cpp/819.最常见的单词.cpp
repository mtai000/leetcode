/*
 * @lc app=leetcode.cn id=819 lang=cpp
 *
 * [819] 最常见的单词
 */

// @lc code=start
class Solution {
public:
    bool isUpper(char ch)
    {
        return ch >= 'A' && ch <= 'Z';
    }
    bool isLower(char ch)
    {
        return ch >= 'a' && ch <= 'z';
    }
    char toLower(char ch)
    {
        return ch + 'a' - 'A';
    }
    bool isAlpha(char ch)
    {
        if(isUpper(ch) || isLower(ch))
            return true;
        else
            return false;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> mp;
        paragraph += " ";
        string temp = "";
        for(int i = 0; i < paragraph.length();i++)
        {
            char ch = paragraph[i];
            if(isAlpha(ch))
            {
                temp += isLower(ch) ? ch : toLower(ch);
            }
            else
            {
                //cout << temp << "    :    ";
                //cout << count(banned.begin(),banned.end(),temp) << endl;
                if(temp != "" && !count(banned.begin(),banned.end(),temp))
                {
                    mp[temp]++;
                }
                temp = "";
            }
        }
        string output = "";
        int max_count = 0;
        for (auto [word,count] : mp)
        {
            //cout << word << "    :     " << count << endl;
            if(count > max_count)
            {
                output = word;
                max_count = count;
            }
        }
        return output;
    }
};
// @lc code=end

