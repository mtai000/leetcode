/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
#include <stack>
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root || root->left == root->right) return true;
        
        TreeNode* ltree = root->left;
        TreeNode* rtree = root->right;
        stack<TreeNode*> lstack;
        stack<TreeNode*> rstack;
        lstack.push(ltree);
        rstack.push(rtree);
        while(!lstack.empty())
        {
            if( !ltree != !rtree)
                return false;
            if(!ltree && !rtree)
            {
                ltree = lstack.top()->right;
                rtree = rstack.top()->left;
                lstack.pop();
                rstack.pop();
                continue;
            }
            if(ltree->val == rtree->val)
            {
                lstack.push(ltree);
                rstack.push(rtree);
                ltree = ltree->left;
                rtree = rtree->right;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

