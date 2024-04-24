/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    void push_to_v(stack<int> &s, vector<string>& v, int base)
    {                    
        if(s.top() == base)
        {
            string tmp = to_string(s.top()); 
            v.push_back(tmp);
        }
        else
        {
            string tmp = to_string(base) + "->" + to_string(s.top());
            v.push_back(tmp);
        }
        while(!s.empty()) s.pop();
    }
    vector<string> summaryRanges(vector<int>& nums) {
			vector<string> v;
            if(nums.size() == 0) return v;
            stack<int> s;
            int base;
			for(int i : nums)
			{
                if(s.empty())
                {

                    
                    //    cout << "ii = " << i<< endl;
                    base = i;
                    //scout << base<< endl;
                    s.push(i);
                }
                else
                {
                    if(i == s.top() + 1)
                    {
                        s.push(i);
                        continue;
                    }
                    else
                    {

                //    cout << base<<endl;
                        push_to_v(s,v,base);
                  //      cout << "i = " << i<< endl;
                        base = i;
                        s.push(i);
                    }           
                }
			}
            push_to_v(s,v,base);
            return v;
    }
};
// @lc code=end

