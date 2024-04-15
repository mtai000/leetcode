/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        return isBalanced(root->left) && isBalanced(root->right) && 
            abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
    }
    int maxDepth(TreeNode* root)
    {
        return !root ? 0 : max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
};
// @lc code=end

