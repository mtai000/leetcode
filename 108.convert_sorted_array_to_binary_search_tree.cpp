/* Convert Sorted Array to Binary Search Tree
 * 
 * [Easy] [AC:68.2% 41.4K of 60.8K] [filetype:cpp]
 * 
 * 将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
 * 
 * 本题中，一个高度平衡二叉树是指一个二叉树每个节点
 * 的左右两个子树的高度差的绝对值不超过 1。
 * 
 * 示例:
 * 
 * 给定有序数组: [-10,-3,0,5,9],
 * 
 * 一个可能的答案是：[0,-3,9,-10,null,5]，它可以表示下面这个高度平衡二叉搜索树：
 * 
 *       0
 * 
 *      / \
 * 
 *    -3   9
 * 
 *    /   /
 * 
 *  -10  5
 * 
 * [End of Description] */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums , 0 , nums.size() -1 );
    }

    TreeNode* sortedArrayToBST(vector<int>& num , int l_n , int r_n)
    {
        if(l_n > r_n) return NULL;
        int mid = l_n + (r_n - l_n)/2;
        TreeNode* top = new TreeNode(num[mid]); 
        top->left = sortedArrayToBST(num , l_n , mid-1);
        top->right = sortedArrayToBST(num , mid+1, r_n);
        return top;
    }
};
