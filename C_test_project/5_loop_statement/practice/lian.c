/***
 * 练习：
 * 1.求n!
 * 2.求1!+2!+...+10!
 * 3.在有序数组v[n]中查找某个数字x
 * 4.多个字符从两端移动，向中间汇聚
 * 5.模拟用户登录情景，只能登陆3次，即只允许输入3次密码，输入超过3次登录失败并退出
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 递归求阶乘，解1，2
int y(int x)
{
    if (x > 0)
    {
        return x * y(x - 1);
    }
    else
    {
        return 1;
    }
}
// 在有序数组v[n]中查找某个数字x，解3
int binsearch(int x, int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return i; // 返回数字x的下标
        }
    }
}
// 模拟登陆，解5
bool verify(char x[])
{
    char password[] = "abc123!";
    if (x == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    // 题解1：
    printf("请输入一个数字x:\n");
    scanf("%d", &x);
    printf("%d的阶乘是:%d\n", x, y(x));
    printf("----------------分割线----------------------\n");
    // 题解2：
    int sum = 0; // 阶乘和
    for (int i = 1; i < 11; i++)
    {
        sum = y(i) + sum;
    }
    printf("1!+2!+...+10!=%d\n", sum);
    printf("----------------分割线----------------------\n");
    // 题解3：
    int v[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int num; // 寻找的下标
    int y;   // 需要找到的数字
    printf("请输入需要找到的数字\n");
    scanf("%d", &y);
    num = binsearch(y, v, 10);
    printf("所找的数字的下标是:%d\n", num);
    printf("----------------分割线----------------------\n");
    // 题解4：
    printf("----------------分割线----------------------\n");
    // 题解5：

    char pw[] = {0};
    int ci = 3;
    for (; ci > 0; ci--)
    {
        printf("请输入登录密码：\n");
        scanf("%s", &pw);
        if (verify(pw) == true)
        {
            printf("输入成功,登陆ing");
            break;
        }
        if (verify(pw) == false)
        {
            printf("输入错误");
        }
        if (ci == 1)
        {
            printf("输入超过3次,登录失败并退出");
            break;
        }
    }

    return 0;
}