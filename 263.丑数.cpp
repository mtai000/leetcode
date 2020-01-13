/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
        if(num == 0) return false;
        int chu[3] = {2,3,5};
        for(int i = 0 ;i < 3 ; )
        {
            if( num % chu[i] == 0)
            {
                num /= chu[i];
            }
            else
            {
                i++;
            }
        }
        if (num == 1)
            return true;
        else 
            return false;
    }
};
// @lc code=end

