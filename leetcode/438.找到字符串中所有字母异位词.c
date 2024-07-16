/*
 * @lc app=leetcode.cn id=438 lang=c
 *
 * [438] 找到字符串中所有字母异位词
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {
    int slen = strlen(s);
    int plen = strlen(p);
    if (plen > slen) {  
        *returnSize = 0;  
        return NULL; // 如果p比s还长，则不可能有异位词  
    } 
    int hashp[128] = {0};
    int num[slen - plen + 1]; // 只需要这么多空间来存储可能的起始索引
    int count = 0;
    for (int i = 0; i < plen; i++) {
        hashp[p[i]] += 1;
    }
    int rs = 0;
    for (int i = 0; i < slen - plen + 1; i++) {
        int hashs[128] = {0};
        int j = i;
        // 哈希长度等于p的字符串
        for (int k = 0; k < plen; k++) {
            hashs[s[j++]] += 1;
        }
        // 比较两个hash是否想等
        bool temp = true; // 记录
        for (int m = 0; m < 128; m++) {
            if (hashp[m] != hashs[m]) {
                temp = false;
                break;
            } 
        }
        if (temp) {
            count++;
            num[rs++] = i;
        }
    }
    int* rearr = (int*)malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++) {
        rearr[i] = num[i];
    }
    *returnSize = count;
    return rearr;
}
// @lc code=end

