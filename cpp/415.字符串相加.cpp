/*
 * @lc app=leetcode.cn id=415 lang=cpp
 *
 * [415] 字符串相加
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        string newStr = "";
        int len1 = num1.size();
        int len2 = num2.size();
        int max, min;
        string longStr, shortStr;


        if (len1 > len2)
        {
            newStr.resize(len1);
            longStr = num1;
            shortStr = num2;
            max = len1;
            min = len2;
        }
        else
        {
            newStr.resize(len2);
            longStr = num2;
            shortStr = num1;
            max = len2;
            min = len1;
        }
        int sign = 0;
        int dist = max - min;
        for (int i = max - 1; i > - 1; i--)
        {
            
            if (i >= dist)
            {
                newStr[i] = longStr[i] + shortStr[i - dist] - '0' + sign;
                sign = 0;
                if (newStr[i] > '9')
                {
                    newStr[i] = newStr[i] - 10;
                    sign = 1;
                }
            }
            else
            {
                newStr[i] = longStr[i] + sign;
                sign = 0;
                if (newStr[i] > '9')
                {
                    newStr[i] = newStr[i] - 10;
                    sign = 1;
                }
            }
        }
        if(sign)
            return "1" + newStr;
        else
            return newStr;
    }
};
// @lc code=end

