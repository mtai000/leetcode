/*
 * @lc app=leetcode.cn id=463 lang=cpp
 *
 * [463] 岛屿的周长
 */

// @lc code=start
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int edge_num = 0;
        for(int i = 0; i < grid.size();i++)
            for(int j = 0; j < grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    edge_num += 4;
                    if(i && grid[i-1][j])
                        edge_num -=2;
                    if(j && grid[i][j-1])
                        edge_num -=2;    
                }
            }
        return edge_num;
    }
};
// @lc code=end

