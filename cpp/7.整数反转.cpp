/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int y = x;
        if(x == 0x80000000) return 0;
        if(x < 0) x = -x;
        int sum = 0;
        while(x)
        {
            if(sum > 0x7FFFFFFF/10 ) return 0;
            sum = (x % 10) + sum * 10;
            x = x/10;
        }
        if( y < 0)
            return -sum;
        else
            return sum;
    }
};
// @lc code=end

