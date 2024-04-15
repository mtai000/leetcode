/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        int newlist[len1 + len2];
        for(int i = 0 ; i < len1; i++)
            newlist[i] = nums1[i];
        for(int i = 0 ; i < len2; i++)
            newlist[i + len1] = nums2[i];
        for(int i = 0 ; i < len1 + len2 - 1; i++)
            for(int j = 0 ; j + 1 < len1 + len2 - i; j++)
                if(newlist[j] > newlist[j + 1])
                {
                    int t = newlist[j];
                    newlist[j] = newlist[j + 1];
                    newlist[j + 1] = t;
                }        
        
        if( (len1+len2) % 2 == 0)
        {
            return double(newlist[(len1+len2)/2] + newlist[(len1+len2)/2 - 1])/2.0;
        }
        else
        {
            //cout << 2 << endl;
            return double(newlist[(len1+len2)/2]);
        }
    }
};
// @lc code=end

