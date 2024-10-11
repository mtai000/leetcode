/*
 * @lc app=leetcode.cn id=6 lang=c
 *
 * [6] Z 字形变换
 */

// @lc code=start
char* convert(char* s, int numRows) {
    int l = strlen(s);
    if(l == 0 || numRows == 1) return s;

    char* ret = (char*)malloc(sizeof(char) * (l + 1));
    ret[l] = '\0';

    int n = 0;
    for(int row = 0 ; row < numRows; row++)
    {
        bool sign = 1;
        int interval1 = 2 * (numRows - row) - 2;
        int interval2 = 2 * (numRows - 1) - interval1;
        // printf("interval1 : %d && %d\n",interval1,interval2);
        for(int j = row; j < l;)
        {
            // printf("%d : %c , and %d\n",j,s[j],interval1&&interval2);
            ret[n++] = s[j];
            if(sign)
            {
                j += (interval1 && interval2) ? interval1 : interval2 + interval1;
            }
            else
            {
                j += (interval1 && interval2) ? interval2 : interval1 + interval2;
            }
            sign = !sign;
        }
    }
    return ret;
}



// @lc code=end

