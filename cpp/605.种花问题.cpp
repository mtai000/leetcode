/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int space = 1;
        int sum = 0;
        for(int i = 0; i < flowerbed.size() ; i++)
        {
            if(flowerbed[i] == 0)
            {
                space++;
                if( i == flowerbed.size() - 1 )
                    sum += space/2;
            }
            else
            {
                sum += space > 2 ? (space - 1)/2 : 0 ;
                space = 0;
            }
            
        }   
        return sum>=n; 
    }
};
// @lc code=end

