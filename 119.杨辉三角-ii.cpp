/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> cur;
        cur.push_back(1);
        for(int i = 0 ; i < rowIndex; i++)
        {
            //cout << (pascalTr.size()) << endl;
            cur = gen(cur) ;
        }

        return cur;
    }

    vector<int> gen(vector<int>& base)
    {
        vector<int> temp; 
        temp.push_back(1);
        for(int i = 0 ; i < base.size() - 1; i++)
        {
            temp.push_back(base[i] + base[i+1]);
        }
        temp.push_back(1);
        return temp;
    }
};

