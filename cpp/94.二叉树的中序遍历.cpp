/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void order(TreeNode* root,vector<int> &res)
    {
        if(!root)
            return;
        order(root->left,res);
        res.push_back(root->val);
        order(root->right,res);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> rtn;
        order(root,rtn);
        return rtn;
    }
};
// @lc code=end

