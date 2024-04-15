/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(!head) return nullptr;
        ListNode *p = head;
        while( p && p->next)
        {
            if(p->next->val == val)
            {
                ListNode *temp = p->next;
                p->next = temp->next;
                delete temp;
            }
            else
                p = p->next;
        }
        if (head->val == val)
        {
            ListNode *temp = head->next;
            delete head;   
            head = temp;
        }
        return head;
    }
    /*    ListNode *p = head;
        ListNode *pre = head;
        while(p) 
        {
            if(p->val == val)
            {
                if(head == p)
                {
                    head = p->next;
                    continue;
                }
                pre->next = p->next;
            }
            else
            {    
                pre = p;
            }
            p = p->next;                    }
        return head;
    }*/
};
// @lc code=end

