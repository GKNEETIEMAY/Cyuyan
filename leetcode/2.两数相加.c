/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    static struct ListNode *l3;
    l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    l3->next = NULL;
    struct ListNode *L;
    L = l3;
    int sum = 0;
    while (l1 != NULL || l2 != NULL || sum != 0)
    {
        if (l1 != NULL)
        {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL)
        {
            sum += l2->val;
            l2 = l2->next;
        }
        struct ListNode *s;
        s = (struct ListNode *)malloc(sizeof(struct ListNode));
        s->next = NULL;
        s->val = fmod(sum, 10);
        L->next = s;
        L = s; // 尾插法
        sum = sum / 10;
    }
    l3 = l3->next;
    return l3;
}
// @lc code=end
