/*
 * @lc app=leetcode.cn id=455 lang=c
 *
 * [455] 分发饼干
 */

// @lc code=start
int cmp(int *a, int *b){
    return *a - *b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g,gSize,sizeof(int),cmp); 
    qsort(s,sSize,sizeof(int),cmp); 

    int i = 0;
    for(int j = 0;i < gSize && j < sSize;j++)
    {
        if (g[i] <= s[j])
        {
            i++;
        }
    }
    return i;
}
// @lc code=end

