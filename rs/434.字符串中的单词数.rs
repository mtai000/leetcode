/*
 * @lc app=leetcode.cn id=434 lang=rust
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
impl Solution {
    pub fn count_segments(s: String) -> i32 {
        if s.len() == 0 { return 0; }
        let mut isWord = false;
        let mut count = 0;
        for c in s.chars() {
            if c == ' ' {
                if isWord {
                    count += 1;
                }
                isWord = false;
            }
            else
            {
                isWord = true;
            }
        }

        if s.chars().nth(s.len() - 1).unwrap() == ' ' {
            count
        }
        else
        {
            count + 1
        }
    }
}
// @lc code=end

