/*
 * @lc app=leetcode.cn id=66 lang=rust
 *
 * [66] 加一
 */

// @lc code=start

impl Solution {
    pub fn plus_one(digits: Vec<i32>) -> Vec<i32> {
        let mut sign = 0;
        let mut v = Vec::new();
        for i in (0..digits.len()).rev(){
            let mut tmp = digits[i] + sign;
            if i == digits.len() - 1 {
                tmp += 1;
            }
            if tmp > 9 {
                tmp = tmp % 10;
                sign = 1;
            }
            else {
                sign = 0;
            }
            v.push(tmp as i32); 
        }
        if sign == 1{
            v.push(sign);
        }
        v.reverse();
        v
    }
}

// @lc code=end

