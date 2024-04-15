/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <math.h>
class Solution {
public:
    /*int minDepth(TreeNode* root)
    {
        if(!root) return 0;
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return (left && right)?1+min(left,right):1+left+right;
    }*/
    
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        if(!root->left) return minDepth(root->right) + 1;
        if(!root->right) return minDepth(root->left) + 1;
        return min(minDepth(root->left),minDepth(root->right)) + 1; 
    }
};
// @lc code=end

