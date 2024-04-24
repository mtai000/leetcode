/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    int bitcount(int n) {
        int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }

    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v ;
        for(int h =0;h<12;h++)
            for(int m = 0;m < 60;m++)
            {
                if(bitcount(h) + bitcount(m) == turnedOn)
                    v.push_back(to_string(h) + (m<10?":0":":") +to_string(m));
            }
        return v;
    }
};
// @lc code=end

