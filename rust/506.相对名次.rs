/*
 * @lc app=leetcode.cn id=506 lang=rust
 *
 * [506] 相对名次
 */

// @lc code=start

use std::collections::HashMap;
impl Solution {
    pub fn find_relative_ranks(score: Vec<i32>) -> Vec<String> {
        if score.len() == 0 {return vec![];}
        let mut hash = HashMap::new();
        let mut newSort = score.clone();
        newSort.sort_by(|a,b| b.cmp(a) );
    
        for i in 0..newSort.len() {
            match i {
                0 => hash.insert (newSort[i]  , String::from("Gold Medal")),
                1 => hash.insert (newSort[i]  , String::from("Silver Medal")),
                2 => hash.insert (newSort[i]  , String::from("Bronze Medal")),
                _ => hash.insert (newSort[i]  , (i+1).to_string()),
            };
        }
        
        let mut res = vec![];
        for i in score{
            res.push(hash[&i].clone());
        }
        res

    }
}

// @lc code=end

