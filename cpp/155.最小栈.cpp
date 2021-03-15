/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    struct LNode{        
        int val;
        int min;
        LNode *next;
    }; 

    LNode* head = NULL;

    MinStack() { 
        //head = new LNode();
    }
    
    void push(int x) {
        LNode *ln = new LNode();
        ln->val = x;
        ln->next = head;
        ln->min = !head || x < head->min ? x : head->min;
        head = ln;
    }
    
    void pop() {
        LNode *tmp;
        if( head )
            tmp = head->next;
            delete head;
        head = tmp;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

