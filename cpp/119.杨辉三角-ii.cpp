/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp(1);
        temp[0] = 1;
        for(int i = 1 ; i <= rowIndex + 1; i++)
        {
            temp.resize(i);
            temp[i-1] = 1;
            for(int j = i - 2; j > 0 ; j--)
            {
                temp[j] = temp[j] + temp[j-1];
            }
            temp[0] = 1;   
        }

        return temp;
    }
};

