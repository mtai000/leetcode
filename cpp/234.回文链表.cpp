/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void printList(ListNode *p)
    {
        while(p != nullptr)
        {
            std::cout  << p->val<<  std::endl;
            std::cout << p <<std ::endl;
            p=p->next;
        }
    }
    ListNode* reverseList(ListNode* cur)
    {
        if(cur ==nullptr || cur->next == nullptr) return cur;
        ListNode *prev;
        ListNode *end = cur;
        while(cur != nullptr)
        {
            ListNode *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        end->next = nullptr;
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head ==nullptr || head->next == nullptr) return true;
        ListNode* fast_p= head->next, *slow_p= head;
        while(fast_p != nullptr && fast_p->next != nullptr)
        {
            fast_p = fast_p->next->next;
            slow_p = slow_p->next;
        }

        ListNode* cmp_p1 = head,*cmp_p2;
        cmp_p2 = reverseList(slow_p->next);

        while(cmp_p2 != nullptr)
        {
            //cout << cmp_p1 << " is == " << cmp_p2 << endl;
            if(cmp_p1->val != cmp_p2->val)
                return false;
            cmp_p1 = cmp_p1->next;
            cmp_p2 = cmp_p2->next;
        }

        return true;
    }
};
// @lc code=end

