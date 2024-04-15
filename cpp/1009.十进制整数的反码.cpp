/*
 * @lc app=leetcode.cn id=1009 lang=cpp
 *
 * [1009] 十进制整数的反码
 */

// @lc code=start
#include <cmath>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        if (n ==0) return 1;
        int i = 1;
        while(i <= n + 1)
        {
            if( i == n + 1)
                return 0;
            i = i << 1;
        }
        return i - n - 1;

    }
};
// @lc code=end

