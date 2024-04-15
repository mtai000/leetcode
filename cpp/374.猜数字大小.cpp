/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int lo = 1;
        int hi = n;
        while(lo < hi)
        {
            int mid = lo + (hi - lo)/2;
            if(guess(mid) == -1)
            {
                hi = mid;
                continue;
            }
            if(guess(mid) == 1)
            {
                lo = mid + 1;
                continue;
            }
            return mid;
        }
        return lo;
    }
};
// @lc code=end

