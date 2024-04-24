/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
		void constructPath(string paths,TreeNode* root,vector<string> &v)
		{
			if(root ==nullptr) return;
			paths += to_string(root->val);
			if(root->left ==nullptr && root->right == nullptr)
				v.push_back(paths); 
			else
			{
				paths += "->";
				constructPath(paths,root->left,v);
				constructPath(paths,root->right,v);
			}
			
		}

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        constructPath("",root,v);
		return v;
    }
};
// @lc code=end

