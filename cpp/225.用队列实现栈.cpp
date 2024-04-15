/*class MyStack {
public:
    struct ListNode {
        int val;
        ListNode *pre;
        ListNode *next;
        ListNode() : val(0), next(nullptr){}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* ln = new ListNode();
    ListNode* head = ln;
    MyStack() {

    }
    
    void push(int x) {
        ListNode* next = (struct ListNode*) malloc(sizeof(struct ListNode));
        next->next = nullptr;
        
        next->val = x;

        next->pre = ln;
        ln->next = next;
      
        ln = ln->next;
    }
    
    int pop() {
        int val = ln->val;
        ln = ln->pre;

        //ln->next = nullptr;
        return val;
    }
    
    int top() {
        return ln->val;
    }
    
    bool empty() {
       return ln == head;
    }
};*/

class MyStack {
public:
	
	queue<int>* q = new queue<int>();
	MyStack() {

	}
	void push(int x) {
        int len = q->size();
        q->emplace(x);
		while (len--)
		{
            int temp = q->front();
            q->pop();
			q->push(temp);

		}
	}

	int pop()
	{
        int pop = q->front();
        q->pop();
		return pop;	

	}

	int top()
	{
		return q->front();
	}

	bool empty()
	{
		return  q->empty();
	}
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

