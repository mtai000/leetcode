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
        vector<vector<int>> rst(numRows,vector<int>());

        for(int i = 0 ; i < numRows ; i++)
        {
            rst[i].resize(i+1);
            rst[i][0] = 1;
            rst[i][i] = 1;
        }

        for(int i = 1 ; i < numRows; i++)
        {
            for(int j = 1; j < rst[i-1].size(); j++)
                rst[i][j] = rst[i-1][j-1] + rst[i-1][j];
        }

        return rst;
    }
};

