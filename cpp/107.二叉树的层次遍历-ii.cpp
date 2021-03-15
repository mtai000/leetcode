/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层次遍历 II
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

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        if(root == NULL) return vec;
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty())
        {
            int deepCount = que.size();
            vector<int> depVec; 
            while( deepCount > 0)
            {
                TreeNode *cur = que.front();
                depVec.push_back(cur->val);
                que.pop();
                if(cur->left)  que.push(cur->left);
                if(cur->right) que.push(cur->right);
                --deepCount;
            }
            vec.insert(vec.begin(),depVec);
        }
        return vec;
    }
};
// @lc code=end

