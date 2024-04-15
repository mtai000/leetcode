/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s)
    {
        if(!s.length()) return true;
        for(int i=0,j=s.length()-1;i<j;)
        {
            bool iIsLegal = isLegalChar(s[i]);
            bool jIsLegal = isLegalChar(s[j]);
            if(!iIsLegal) ++i;
            if(!jIsLegal) --j;
            if(!iIsLegal || !jIsLegal) continue;

            if(s[i] >= 'a') s[i] = (char)(s[i] - 32 );
            if(s[j] >= 'a') s[j] = (char)(s[j] - 32 );
            if(s[i] == s[j])
            {
                ++i,--j;
            }
            else
            {
                return false;
            }     
        }
        return true;

    }
    bool isLegalChar(char c)
    {
        return (c >='0' && c<='9') || (c>='a' && c<='z') || (c>='A' && c<='Z');
    }
    /*bool isPalindrome(string s) {
        //cout << s.length() << endl;
        //cout << s << endl;
        if(!s.length()) return true;
        string s2 = "";
        //int len = s2.length();
        for(int i = 0;i<s.length();i++)
        {
            cout << s[i];
            if( (s[i]>='A' && s[i]<='Z') ||
                   (s[i] >= '0' && s[i] <='9'))
                s2.append(1,s[i]);
            if( s[i]>='a' && s[i]<='z' )
                s2.append(1,(char)(s[i] - 32));
            //cout << len << endl;
        }
        cout << s2 << endl;
    //}
        int len = s2.length();
        cout << len << endl;
        for (int i = 0 ; i< len/2;i++)
        {
            if(s2[i] != s2[len-1-i])
                return false;
        }
        return true;
    }*/


};
// @lc code=end

