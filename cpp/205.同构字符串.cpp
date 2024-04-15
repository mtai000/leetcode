/*
 * @lc app=leetcode.cn id=205 lang=cpp
 *
 * [205] 同构字符串
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int fs[128] = {0};
        int ft[128] = {0};

        for(int i = 0 ; i < s.length(); i++)
        {
            if(fs[s[i]] == 0 && ft[t[i]] == 0)
            {
                fs[s[i]] = t[i];
                ft[t[i]] = s[i];
            }
            else if (fs[s[i]] != t[i] || ft[t[i]] != s[i])
                return false;
        }
        return true;

    }
    /*    return isIso(s,t) && isIso(t,s);
    }

    bool isIso(string s, string t) {
        std::map<char,char> chrMap;
        for(int i = 0 ; i < s.length(); i++)
        {
            if( chrMap.find(s.at(i)) == chrMap.end()) chrMap[s.at(i)] = t.at(i);
            cout << s.at(i) << "," << t.at(i) << endl;
            if(chrMap[s.at(i)] != t.at(i))
                return false;
        } 
        return true;
    }*/
};
// @lc code=end

