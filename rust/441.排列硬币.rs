/*
 * @lc app=leetcode.cn id=441 lang=rust
 *
 * [441] 排列硬币
 */

// @lc code=start
impl Solution {
    pub fn arrange_coins(n: i32) -> i32 {
        if(n > 1) {
            let mut i = 0;
            let mut sum = n;
            while sum >=  0  {
                i += 1;
                sum -= i;
                //print!("{},{}\n",sum,i);            
            };
            i - 1
        }
        else{
            1
        }
    }
}
// @lc code=end

