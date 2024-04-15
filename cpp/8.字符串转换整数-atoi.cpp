/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
#include <stdio.h>
class Solution {
public:
	int myAtoi(string s)
	{
		int i=0;
		int sign = 1;
		int num = 0;
		while (s[i] == ' ')
		{

			i++;
		}
		if (s[i] == '+' || s[i] == '-')
		{
			sign = s[i] == '-' ? -1 : 1;
			i++;
		}
		while(isdigit(s[i]))
		{
           
			if (num > 0x7FFFFFFF / 10)
			{
				if (sign == -1)
					return 0x80000000;
				else
					return 0x7FFFFFFF;
			}
			else if (num == 0x7FFFFFFF / 10)
			{
				if(sign == -1 && s[i] > '7')
					return 0x80000000;
				if(sign == 1 && s[i] > '6')
					return 0x7FFFFFFF;
				num = num * 10 - '0' + s[i];
			}
			else
			{
				num = num * 10 - '0' + s[i];
			}
			i++;
		}
        //cout << num<<endl;
		return num * sign;
	}
};

/*
class Solution {
public:
    bool isnumber(char c)
    {
        return c >= '0' && c <= '9';
    }

    int myAtoi(string s) {
        int end = -1;
        int start = -1;
        int num = 0;
        int sign = 1;
        for (int i = 0; i < s.length() && (start == -1 || end == -1); i++)
        {
            if (isnumber(s[i]))
            {
                if (num > 0x7FFFFFFF / 10)
                {
                    if (sign == -1)
                        return 0x80000000;
                    else
                        return 0x7FFFFFFF;   
                }
                else
                    if(num == 0x7FFFFFFF / 10)
                    {
                        if(sign == -1)
                        {
                            if(s[i] > '7')
                                return 0x80000000;
                        }
                        else
                            if(s[i] > '6')
                                return 0x7FFFFFFF;
                        num = num * 10 - '0' + s[i];
                    }
                    else
                        num = num * 10  - '0' + s[i];
                if (start == -1)
                    start = i;
            }
            else
            {
                if (s[i] == ' ')
                    if(start != -1 || end != -1)
                        return sign*num;
                    else
                    continue;
                if ((s[i] == '+' || s[i] == '-') && !isnumber(s[i + 1]))
                    return num * sign;
                if (s[i] != '+' && s[i] != '-')
                    return sign * num;
                if (start > -1)
                {
                    end = i;
                }
            }

            if ( num == 0 && i < s.length() - 1 && isnumber(s[i + 1]))
            {
                if (s[i] == '-')
                {
                    start = i;
                    sign = -1;
                }
                if (s[i] == '+')
                {
                    start = i;
                }
            }


        }
        return sign * num;
    }
};*/
// @lc code=end

