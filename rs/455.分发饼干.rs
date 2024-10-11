/*
 * @lc app=leetcode.cn id=455 lang=rust
 *
 * [455] 分发饼干
 */

// @lc code=start
impl Solution {
    pub fn find_content_children(g: Vec<i32>, s: Vec<i32>) -> i32 {
        let (mut g,mut s) = (g,s);
        g.sort();
        s.sort();

        let mut i = 0;
        let mut j = 0;
        while(i < g.len() && j < s.len()){
            if g[i] <= s[j] {
                i += 1;
            }
            j += 1;
        }

        i as i32
    }
}
// @lc code=end

