/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    if (headA == NULL || headB == NULL)
    {
        return NULL; // 如果任一链表为空，则不可能有交点
    }

    struct ListNode *pA = headA, *pB = headB;

    // 当 pA 和 pB 不相等时，分别遍历两个链表
    // 如果 pA 到达链表末尾，则将 pA 重置为 headB 的头节点继续遍历
    // 如果 pB 到达链表末尾，则将 pB 重置为 headA 的头节点继续遍历
    // 这样做的目的是让两个指针在相同的“速度”下遍历两个链表，如果它们相交，它们最终会在交点相遇
    while (pA != pB)
    {
        pA = (pA == NULL) ? headB : pA->next;
        pB = (pB == NULL) ? headA : pB->next;
    }

    // 当 pA 和 pB 相等时，要么它们都指向了交点，要么它们都指向了 NULL（链表不相交）
    return pA;
}
// @lc code=end
