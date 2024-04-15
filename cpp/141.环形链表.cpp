/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode* fast = head;
        ListNode* slow = head;
        while(true)
        {
            fast = fast->next;
            if(!fast) return false;
            fast = fast->next;
            if(!fast) return false;
            slow = slow->next;
            if(slow == fast) return true;
        } 
    }

    /*bool hasCycle(ListNode *head)
    {
        while(head)
        {
            if(head->val == NULL)
                return true;
            head->val = NULL;
            head = head->next;
        }
        return false;   
    }*/
};
// @lc code=end

