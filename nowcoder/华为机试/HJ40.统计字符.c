/**
 * @nc app=nowcoder id=539054b4c33b4776bc350155f7abd8f5 topic=37 question=21263 lang=C
 * 2024-07-07 23:58:26
 * https://www.nowcoder.com/practice/539054b4c33b4776bc350155f7abd8f5?tpId=37&tqId=21263
 * [HJ40] 统计字符
 */

/** @nc code=start */

#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        printf("%d\n", a + b);
    }
    return 0;
}

/** @nc code=end */
