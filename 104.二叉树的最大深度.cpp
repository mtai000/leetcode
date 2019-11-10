/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode* root) {
        /*if(!root)
            return 0;
        int lmax = maxDepth(root->left);
        int rmax = maxDepth(root->right);
        return lmax > rmax ? ++lmax : ++rmax;*/
        return !root ? 0 : max(maxDepth(root->left),maxDepth(root->right)) + 1;
    }
};
// @lc code=end

