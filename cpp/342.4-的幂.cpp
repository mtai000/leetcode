/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num < 0 || num & (num - 1))
            return false;
        return num&0x55555555; 
    }
};
// @lc code=end

