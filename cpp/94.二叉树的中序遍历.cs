/*
 * @lc app=leetcode.cn id=94 lang=csharp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    IList<int> ilist = new  List<int>();
    public void order(TreeNode root)
    {
        if (root == null) {
            return;
        }
        order(root.left);
        ilist.Add(root.val);
        order(root.right);
    }
    public IList<int> InorderTraversal(TreeNode root) {
        order(root);
        return ilist;
    }
}


// @lc code=end

