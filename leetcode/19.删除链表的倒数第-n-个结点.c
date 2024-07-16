/*
 * @lc app=leetcode.cn id=19 lang=c
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* s = head;
    int len = 0;
    while (s != NULL) {
        len++;
        s = s->next;
    }
    if (len == 1 && n == 1) {
        return NULL;
    }
    int num = len - n + 1; // 整数第num个5-2=3+1=4
    struct ListNode* p = head;
    struct ListNode* predel = NULL;
    struct ListNode* del = NULL;
    for (; num > 0;) {
        if (num == 1) {
            del = p;
        }
        if (num == 2) {
            predel = p;
        }
        num--;
        p = p->next;
    }
    //删除链表头的情况下
    if (predel != NULL) {
        predel->next = del->next;
    } else {
        head = del->next;
    }
    return head;
}
// @lc code=end

