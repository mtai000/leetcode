/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int arr[52] = { 0 };
        for (auto& c : s)
        {
            if (c >= 'a')
            {
                arr[c - 'a' + 26]++;
            }
            if (c <= 'Z')
            {
                arr[c - 'A']++;
            }
        }

        int count = 0;
        for (auto& i : arr)
        {
            if (i != 0)
            {
                i = i >> 1;
                i = i << 1;
                count += i;
            }
        }
        return s.size() > count ? count + 1 : count;
    }
};
// @lc code=end

