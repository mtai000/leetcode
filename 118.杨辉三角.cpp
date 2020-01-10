// @lc code=end

/* Pascal's Triangle
 * 
 * [Easy] [AC:65.1% 51.4K of 79K] [filetype:cpp]
 * 
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 5
 * 
 * 输出:
 * 
 * [
 * 
 *      [1],
 * 
 *     [1,1],
 * 
 *    [1,2,1],
 * 
 *   [1,3,3,1],
 * 
 *  [1,4,6,4,1]
 * 
 * ]
 * 
 * [End of Description] */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTr;
        if(!numRows) return pascalTr;
        vector<int> first;
        first.push_back(1);
        pascalTr.push_back(first);
        for(int i = 0 ; i < numRows-1; i++)
        {
            //cout << (pascalTr.size()) << endl;
            pascalTr.push_back(gen(pascalTr[i]));
        }

        return pascalTr;
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

