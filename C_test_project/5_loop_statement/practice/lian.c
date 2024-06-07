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
int search(int x, int v[], int n) // 顺序查找
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return i; // 返回数字x的下标
        }
    }
    return n;
}
int Binary_search(int x, int v[], int n) // 折半查找，时间复杂度O(log2^N)
{
    int low, middle, high;
    low = 0;
    high = n - 1;
    for (; low <= high;)
    {
        middle = (low + high) / 2;
        if (x == v[middle])
        {
            return middle;
        }
        else if (x < v[middle]) // 如果在中间的左边
        {
            high = middle - 1; // 右边最大坐标边界为原中间坐标减1
        }
        else if (x > v[middle]) // 如果在中间的右边
        {
            low = middle + 1; // 左边最大坐标边界为原中间坐标加1
        }
    }
    return n;
}
// 模拟登陆，解5
bool verify(char x[])
{
    char password[] = "abc123!";  // 引入数据库
    if (strcmp(x, password) == 0) // 对两个字符串进行大小写敏感的比较
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
    int num, mum; // 寻找的下标
    int y;        // 需要找到的数字
    printf("请输入需要找到的数字\n");
    scanf("%d", &y);
    num = search(y, v, 10); // 顺序查找
    if (num < 10)
    {
        printf("所找的数字的下标是:%d\n", num);
    }
    else
    {
        printf("所寻找数字不在数组中\n");
    }
    mum = Binary_search(y, v, 10); // 折半查找
    if (mum < 10)
    {
        printf("所找的数字的下标是:%d\n", mum);
    }
    else
    {
        printf("所寻找数字不在数组中\n");
    }
    printf("----------------分割线----------------------\n");
    // 题解4：

    printf("----------------分割线----------------------\n");
    // 题解5：
    char pw[] = {0};
    for (int ci = 3; ci > 0; ci--)
    {
        printf("请输入登录密码：\n");
        scanf("%s", &pw);
        if (verify(pw))
        {
            printf("输入成功,登陆ing");
            break;
        }
        else
        {
            printf("输入错误\n");
        }
        if (ci == 1)
        {
            printf("输入超过3次,登录失败并退出");
            break;
        }
    }
    return 0;
}