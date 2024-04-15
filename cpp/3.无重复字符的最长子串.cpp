/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128] = {0};
        if(s == "") return 0;
        if(s.size() == 1) return 1;
        int i = 0;
        int len = 0;
        for(int j = 0; j < s.size(); j++)
        {
            i = i > arr[s[j]] ? i : arr[s[j]];
            arr[s[j]] = j + 1;
            len = j - i + 1 > len ? j - i + 1 : len;
        }

        return len;
    }
};
// @lc code=end

