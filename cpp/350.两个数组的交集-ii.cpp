/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int arr[1001] = { 0 };
        vector<int> v;
        for (auto& u : nums1)
        {
            ++arr[u];
        }

        for (auto& u : nums2)
        {
            if (arr[u] > 0)
            {
                v.push_back(u);
                --arr[u];
            }
        }
        return v;

    }
};
// @lc code=end

