/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
#include <math.h>
class Solution {
public:
    bool isHappy(int n) {
        vector<int> cmp;
        while(true)
        {
            int sum = 0;
            do
            {
                sum += pow(n % 10 , 2);
                n /= 10;
            }while(n);
            n = sum;
            if(sum == 1) return true;
            if(find(cmp.begin(),cmp.end(),sum) != cmp.end())
                return false;
            else
                cmp.push_back(sum);
        }
    }
};
// @lc code=end

