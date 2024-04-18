/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] ={0};
        for(auto &c : magazine)
        {
            arr[c -'a']++;
        }
        for(auto &c : ransomNote)
        {
            arr[c-'a']--;
            if(arr[c-'a'] < 0)
                return false;
        }
        return true;
    }
};
// @lc code=end

