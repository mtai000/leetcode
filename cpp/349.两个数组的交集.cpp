/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arr[1000] = { 0 };
        vector<int> v;
        for (auto& u : nums1)
        {
            arr[u] = 1;
        }

        for (auto& u : nums2)
        {
            if (arr[u] == 1)
            {
                v.push_back(u);
                ++arr[u];
            }
        }
        return v;
    }
};
// @lc code=end

