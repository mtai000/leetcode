class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *l3 = l1->val < l2->val?l1:l2; 
        ListNode *p=NULL;
        while(l1&&l2)
        {
            cout << l1->val;
            cout << l2->val << endl;
            if(l1->val < l2->val)
            {
                if(l1->next && (l1->next)->val < l2->val)
                {
                    l1 = l1->next;
                }
                else
                {
                    p = l1->next;
                    //cout << "1";
                    l1->next = l2;
                    l1 = p;
                }
            }   
            else
            {
                if(l2->next && l1->val >= (l2->next)->val)
                {
                    l2 = l2->next;
                }
                else
                {
                    p = l2->next;
                    //cout << "2";
                    l2->next = l1;
                    l2 = p;
                }
            }           
        }
        return l3;

    }
};
// @lc code=end

