/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        if( n < 2 ) return n;
        int i = 1;
        while( n >= 0 )
        {
            n -= i++;
        } 
        return i - 2;
    }
};
// @lc code=end

