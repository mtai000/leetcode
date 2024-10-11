/*
 * @lc app=leetcode.cn id=4 lang=rust
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
impl Solution {
    pub fn find_median_sorted_arrays(nums1: Vec<i32>, nums2: Vec<i32>) -> f64 {
        let len1 = nums1.len();
        let len2 = nums2.len();
        let mid1 : usize = (len1 + len2 - 1) / 2;
        let mid2 : usize = (len1 + len2) / 2;
        let mut arr = [0,0];
        let mut sign = true;
        let mut i = 0;
        let mut j = 0;
        while(i + j <= mid2)
        {
            sign = !sign;
            if i == len1
            {
                if sign {
                    arr[1] = nums2[j];
                } else {
                    arr[0] = nums2[j];
                }
                j+=1;
                continue;
            }
            if j == len2
            {
                if sign {
                    arr[1] = nums1[i];
                } else {
                    arr[0] = nums1[i];
                }
                i+=1;
                continue;
            }
            if nums1[i] < nums2[j]
            {
                if sign {
                    arr[1] = nums1[i];
                } else {
                    arr[0] = nums1[i];
                }
                i+=1;
            }
            else
            {
                if sign {
                    arr[1] = nums2[j];
                } else {
                    arr[0] = nums2[j];
                }
                j+=1;
            }
        }

        if mid1 == mid2  {
            if sign 
            {
                arr[1] as f64
            }
            else
            {
                arr[0] as f64
            }
        } else
        {
            (arr[0] + arr[1]) as f64/2.0
        } 
    }
}
// @lc code=end

