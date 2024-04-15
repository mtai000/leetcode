/*
 * @lc app=leetcode.cn id=405 lang=cpp
 *
 * [405] 数字转换为十六进制数
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        if(!num) return "0";
        char c[16] = { '0', '1', '2', '3',
                       '4', '5', '6', '7',
                       '8', '9', 'a', 'b',
                       'c', 'd', 'e', 'f' };
        string s = "";
        uint32_t u_num = num;
        while(u_num)
        {
            s.insert(0,1,c[u_num& 0xF]);
            u_num >>=  4;
        }
        return s;
    
    }/*    string s = "";
        if(!num) return "0";
        uint32_t u_num = (uint32_t)num;
        while(u_num)
        {   
            int t = u_num % 16;
            if( t > 9)
            {
                s.insert(0,1,'a' + t - 10);
            }
            else
            {
                s.insert(0,1,'0' + t); 
            }
            u_num /= 16;
        }
        return s; 
    */
};
// @lc code=end

