/*
 * @lc app=leetcode.cn id=507 lang=rust
 *
 * [507] 完美数
 */

// @lc code=start
impl Solution {
    pub fn check_perfect_number(num: i32) -> bool {
        if num == 1 {return false;}
        let mut sum = 1;
        for i in 2..f32::sqrt(num as f32) as i32 + 1{
            if num % i == 0 {
                sum += i + num/i;
            }
            if sum > num {
                break;
            }
        }
        num - sum == 0
    }
}
// @lc code=end

