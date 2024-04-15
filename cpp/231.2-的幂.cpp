/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        int two = 1;
        while( n > two && two < 0X40000000)
        {
            two = two << 1;
            if( n == two)
                return true;
        } 
        return false;
    }
};
// @lc code=end

