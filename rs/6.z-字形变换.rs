/*
 * @lc app=leetcode.cn id=6 lang=rust
 *
 * [6] Z 字形变换
 */

// @lc code=start
impl Solution {
    pub fn convert(s: String, num_rows: i32) -> String {
        let s_len = s.len();
        let num_rows: usize = num_rows as usize;
        if s_len == 0 || num_rows == 1 || num_rows >= s_len
        {
            return s;
        }

        let mut ret = String::new();

        let mut idx : usize = 0;
        let s = s.chars().collect::<Vec<char>>();
        for row in 0..num_rows
        {
            let mut j = row;
            let mut sign = true;
            let interval1 = 2 * (num_rows - row) - 2;
            let interval2 = 2 * (num_rows - 1) - interval1;
            while j < s_len
            {
                ret.push(s[j]);
                idx += 1;
                if interval1 == 0 || interval2 == 0
                {
                    j += interval1 + interval2;
                }
                else
                {
                    if sign
                    {
                        j += interval1;
                    }
                    else
                    {
                        j += interval2;
                    }
                }
                sign = !sign;
            }
        }
        ret
    }
}
// @lc code=end

