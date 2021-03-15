/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        int nums[n + 1] = {0};
        int count = 0;
        for(int i = 2 ; i < n ; i++)
        {
            int t = 2 * i;
            if(!nums[i])
            {
                count++;
                while(t <= n)
                {
                    nums[t] = 1;   
                    t += i;
                    //cout << t << " : i=" << i << endl;
                }
            }
        }   
        
        return count;
    }
};
// @lc code=end

