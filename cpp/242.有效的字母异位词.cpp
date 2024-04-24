/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    /*int* countString(string& s)
    {
        int *arr = new int[26]();
        for (auto& c : s)
        {
            arr[c - 'a']++;
        }
        return arr;
    }

    bool isAnagram(string s, string t) {
        int *arr_s = countString(s);
        int *arr_t = countString(t);

        for (int i = 0; i < 26; i++)
        {
            if (arr_s[i] != arr_t[i])
            {
                delete[] arr_s;
                delete[] arr_t;
                return false;
            }
        }
        delete[] arr_s;
        delete[] arr_t;
        return true;
    }*/
    bool isAnagram(string s, string t) {
        int arr_s[26] = {0};
        for(auto &c : s)
            arr_s[c - 'a']++;

        int arr_t[26] = {0};
        for(auto &c : t)
            arr_t[c - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (arr_s[i] != arr_t[i])
            {
                return false;
            }
        }
        
        return true;
    }
};
// @lc code=end

