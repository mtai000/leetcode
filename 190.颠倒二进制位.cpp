/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0;
        int i = 32;
        while(i--)
        {
            rev = (rev<<1) + (n&(uint32_t)1);
            n >>= 1;
        } 
        return rev;
    }
};
// @lc code=end

