/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] N 字形变换
 */

// @lc code=start

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows < 2)
            return s;
        string s_new = "";
        int interval = 2 * numRows - 2;
        int trans_points = int((s.length() + interval) / interval);
        for (int row = 0; row < numRows; row++)
        {
            for (int k = 0; k < trans_points; k++)
            {
                int pos = interval * k;
                if (row == 0)
                {
                    s_new += s[pos - row];
                }
                else if (row == numRows - 1)
                {
                    if(k!=0)
                    s_new += s[pos - row];
                }
                else 
                {
                    if (pos - row < s.length() && k != 0)
                    {
                        s_new += s[pos - row];
                    }
                    if (pos + row < s.length())
                    {
                        s_new += s[pos + row];
                    }
                }
            }
        }

        return s_new;
    }
};

// @lc code=end

