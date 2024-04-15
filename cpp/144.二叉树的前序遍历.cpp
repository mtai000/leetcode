/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
 /* void order(TreeNode* root, vector<int> &v)
    {
        if(root == NULL)
            return;
        v.push_back(root->val);
        order(root->left, v);
        order(root->right, v);
    }*/

    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> rtn;
        
        TreeNode* p1 = root; p2 = nullptr;
        while(p1 != nullptr)
        {
            p2 = p1->left;
            if(p2 != nullptr)
            {

            }
            else
            {
                rtn.push_back(p1->val);
            }
            p1 = p1->right;
        }

        return rtn ; 
    }
};
// @lc code=end

