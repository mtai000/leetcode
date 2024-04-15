/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> sdn;
        for(int i = left; i <= right; i++)
        {
            if(isSelfDN(i))
                sdn.push_back(i);
        }    
        
        return sdn;
    }

    bool isSelfDN(int n)
    {
        int input = n;
        while(n)
        {
            if(!(n%10) || input % (n%10) != 0 )
                return 0;
            n /= 10; 
        }
        return true;
    }
};
// @lc code=end

