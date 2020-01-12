/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 32;
        int cnt = 0;
        while(i--)
        {
            if(n&1)  cnt++;
            n >>= 1;
        }
        return cnt;
    }
};
// @lc code=end

