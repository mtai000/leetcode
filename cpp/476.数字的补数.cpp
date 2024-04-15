/*
 * @lc app=leetcode.cn id=476 lang=cpp
 *
 * [476] 数字的补数
 */

// @lc code=start
class Solution {
public:
    int findComplement(int num) {
        int n=0;
        int a=num;
        while(num!=0){
            n= (n << 1) + 1;
            num = num >> 1;
        }
        return n-a;
    }
};
// @lc code=end

