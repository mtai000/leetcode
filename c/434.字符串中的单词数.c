/*
 * @lc app=leetcode.cn id=434 lang=c
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
#include <stdbool.h>
int countSegments(char* s) {
    char *c;
    c = s;
    if(*c == '\0') return 0;
    int count = 0;
    bool isWords = false;
    while(*c != '\0')
    {
        if(*c == ' ')
        {
            if(isWords)
                count++;
            isWords = false;   

        }
        else
        {
            isWords = true;
        }
        c++;
    } 

    return *(c-1) == ' ' ? count : count + 1;
}
// @lc code=end
