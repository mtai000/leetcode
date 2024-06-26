/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        for(int i = 1 ; i<=n ; i++)
        {
            if(i % 3 == 0)
                if(i % 5 == 0)
                    v.push_back("FizzBuzz");
                else
                    v.push_back("Fizz");
            else 
                if(i % 5 == 0)
                    v.push_back("Buzz");
                else
                    v.push_back(to_string(i));
        }
        return v;
    }
};
// @lc code=end

