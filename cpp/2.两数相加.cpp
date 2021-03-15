/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool incrase = 0;
        ListNode* l3 = NULL;
        ListNode* l4 = NULL;
        while(l1 || l2 || incrase)
        {
            int n1 = 0, n2 = 0;
            if(l1)
            {
                n1 = l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                n2 = l2->val;
                l2 = l2->next;
            }

            ListNode* t =new ListNode(n1 + n2 + incrase);
            if(t->val >= 10)
            {
                t->val -= 10;
                incrase = 1; 
            }
            else
            {
                incrase = 0;
            }
            if(l3 == NULL)
            {
                l3 = t; 
                l4 = t;
            }
            else
            { 
                l3->next = t;
                l3 = l3->next;
            }
        } 
        return l4;
    }
};
// @lc code=end

