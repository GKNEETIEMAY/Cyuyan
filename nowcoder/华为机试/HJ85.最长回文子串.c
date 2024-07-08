/**
 * @nc app=nowcoder id=12e081cd10ee4794a2bd70c7d68f5507 topic=37 question=21308 lang=C
 * 2024-07-08 03:34:55
 * https://www.nowcoder.com/practice/12e081cd10ee4794a2bd70c7d68f5507?tpId=37&tqId=21308
 * [HJ85] 最长回文子串
 */

/** @nc code=start */

#include <stdio.h>
#include <string.h>
char z[1001] = {0};                // 返回值
char* longestPalindrome(char* s) { //"babad\0 -> bab||aba" aaaaa
    int length = strlen(s);        // 字符串的长度,5->0,4
    int n;                         // 滑块尺寸初始大小->4
    int left, right;               // 滑块两个边界
    int head;
    memset(z, 0, sizeof(z));
    // 思路：大滑动窗口，依次减小
    if (length == 1) {
        z[0] = *s;
    } else {
        for (n = length - 1; n >= 0; n--) // 滑框进行减小的过程
        {
            for (left = 0; left < length - n; left++) {
                head = left;      // 记录此次的左边初始位置
                right = left + n; // 定义右边的大小
                while (s[left] == s[right]) {
                    if (left >= right) {
                        for (int i = 0; i <= n; i++) {
                            z[i] = *(s + head + i);
                        }
                        break;
                    }
                    left++;
                    right--;
                }
                left = head;
                if (strlen(z) != 0) {
                    break;
                }
            }
            if (strlen(z) != 0) {
                break;
            }
        }
    }
    return z;
}

int main() {
    char str[351];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")]=0;
    longestPalindrome(str);
    int length=strlen(z);
    printf("%d",length);
    return 0;
}

/** @nc code=end */
