/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int sum = 0;
        int tmp = n;
        for(;tmp > 1;)
        {
            tmp = tmp/5;
            sum += tmp;
        }
        return sum;
    }
};
// @lc code=end

