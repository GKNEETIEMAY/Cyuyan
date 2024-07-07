/**
 * @nc app=nowcoder id=a35ce98431874e3a820dbe4b2d0508b1 topic=37 question=21225 lang=C
 * 2024-07-08 00:01:40
 * https://www.nowcoder.com/practice/a35ce98431874e3a820dbe4b2d0508b1?tpId=37&tqId=21225
 * [HJ2] 计算某字符出现次数
 */

/** @nc code=start */

#include <stdio.h>
#include <string.h>
#include <ctype.h>   
int main() {
    char arr[1001];
    char s;
    int final_nums = 0;
    // 读取一行文本
    fgets(arr, sizeof(arr), stdin);
    // 移除可能由 fgets 读取的换行符
    arr[strcspn(arr, "\n")] = 0;
    // 读取要搜索的字符
    scanf(" %c",&s); // 注意前面的空格，它会跳过任何空白字符（包括换行符）
    if (s >= '0' && s <= '9') {
        // 查找个数
        for (int i = 0; arr[i] != '\0'; i++) {
            if (arr[i] == s) {
                final_nums++;
            }
        }
    } else {
        // 转换为小写以简化大小写不敏感的比较
        char search_char = tolower(s);
        for (int i = 0; arr[i] != '\0'; i++) {
            if (tolower(arr[i]) == search_char) {
                final_nums++;
            }
        }
    }
    printf("%d\n", final_nums);
    return 0;
}
/** @nc code=end */
