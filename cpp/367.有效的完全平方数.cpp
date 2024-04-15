/*
 * @lc app=leetcode.cn id=367 lang=cpp
 *
 * [367] 有效的完全平方数
 */

// @lc code=start
class Solution {
public:
	bool isPerfectSquare(int num) {
		for (int i = 0; 0 < num; i++)
		{
			num -= (i << 1) + 1;
		}
		return !num;
	}
};
// @lc code=end

