/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
#include <math.h>
class Solution {
public:
    int climbStairs(int n) {
        int n1 = 1;
        int n2 = 2;
        if(n==1)return n1;
        if(n==2)return n2;
        int temp = 0;
        for(int i =2 ; i<= n; i++)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
              
        return temp; 
        
    }
};
// @lc code=end

