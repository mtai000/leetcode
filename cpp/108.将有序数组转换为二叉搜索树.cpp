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
