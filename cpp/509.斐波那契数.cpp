/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution {
public:
    int fib(int N) {
        //if( !N ) return 0;
        //if( N == 1) return 1;
        //return fib(N - + 1) + fib(N - 2);
        int num[31] = 
        {
            0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,
            17711,28657,46368,75025,121393,196418,317811,514229,832040
        };
        return num[N];
    }
};
// @lc code=end

