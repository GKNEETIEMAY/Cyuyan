/**
 * @nc app=nowcoder id=54404a78aec1435a81150f15f899417d topic=37 question=21274 lang=C
 * 2024-07-08 02:30:50
 * https://www.nowcoder.com/practice/54404a78aec1435a81150f15f899417d?tpId=37&tqId=21274
 * [HJ51] 输出单向链表中倒数第k个结点
 */

/** @nc code=start */

#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int m_nKey;
    struct ListNode* m_pNext;
};
struct ListNode* Get_elem(struct ListNode* L, int n) {
    if (n < 1) {
        return NULL;
    }
    int j = 1;
    struct ListNode* p = L->m_pNext;
    while (p != NULL && j < n) {
        p = p->m_pNext;
        j++;
    }
    return p;


}
int main() {
    int num, k;
    //定义链表头
    struct ListNode* head;
    while (scanf("%d", &num) != EOF) {
        head = (struct ListNode*)malloc(sizeof(struct ListNode));
        head->m_pNext = NULL;
        //定义链表节点
        struct ListNode* node, *r = head;
        //尾插法开始构建链表
        int temp = num;
        while (num > 0) {
            int val;
            node = (struct ListNode*)malloc(sizeof(struct ListNode));
            scanf("%d", &val);
            node->m_nKey = val;
            r->m_pNext = node;
            r = node;
            num--;
        }
        r->m_pNext = NULL; //最后一个节点指针置空
        scanf("%d", &k); //返回倒数第k个
        struct ListNode* find = Get_elem(head, temp - k + 1);
        printf("%d\n", find->m_nKey);
    }
    return 0;
}
/** @nc code=end */
