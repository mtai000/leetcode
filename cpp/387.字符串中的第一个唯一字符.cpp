/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26] = {0};
        for (auto& c : s)
        {
            arr[c - 'a']++;
        }
        for (int i = 0 ; i < s.size(); i++)
        {
            if (arr[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};
// @lc code=end

