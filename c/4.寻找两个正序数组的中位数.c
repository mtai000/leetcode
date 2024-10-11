/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int mid1 = (nums1Size + nums2Size - 1) / 2;
    int mid2 = (nums1Size + nums2Size) / 2;
    int arr[2] = {0};
    int i = 0, j = 0;
    bool sign = 0;
    while(i + j <= mid2)
    {
        sign = !sign;
        if( i == nums1Size )
        {
            arr[sign] = nums2[j];
            j++;
            continue;
        }
        if( j == nums2Size )
        {
            arr[sign] = nums1[i];
            i++;
            continue;
        }

        if( nums1[i] < nums2[j] )
        {
            arr[sign] = nums1[i];
            i++;
        }
        else
        {
            arr[sign] = nums2[j];
            j++;
        }
    }
    
    return mid1 == mid2 ? arr[sign] : (arr[0] + arr[1])/2.0;
}
// @lc code=end

int main(){
    int n1[] = {1,2};
    int n2[] = {3,4};
    printf("Result:%f",findMedianSortedArrays(n1,2,n2,2));

}