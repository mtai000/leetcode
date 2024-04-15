/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int i = 0 ; i < bills.size(); i++)
        {
            if(bills[i] == 5)
                five++;
            else if(bills[i] == 10)
            {
                if(five > 0)
                {
                    ten++;
                    five--;
                }
                else return false;
            }
            else if(bills[i] == 20)
            {
                if(ten > 0 && five > 0)
                {
                    ten--;
                    five--;
                }
                else if(five >= 3)
                {
                    five -= 3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

