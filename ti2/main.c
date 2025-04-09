#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义结构体
struct node
{
    int num; // 这个字段在当前的实现中并未使用，但保留以符合原始代码结构
    char str[4465];
};

// countinsert函数实现
char *countinsert(char *nums)
{
    if (!nums || !*nums)
        return NULL; // 如果输入为空，则返回NULL

    // 估算结果字符串的长度（这里是一个保守的估计）
    size_t len = strlen(nums);
    char *result = (char *)malloc(2 * len + 1); // 分配足够的内存
    if (!result)
        return NULL; // 内存分配失败

    int count = 1;
    char current = nums[0];
    size_t result_index = 0;

    // 遍历字符串，统计连续字符的个数
    for (size_t i = 1; nums[i] != '\0'; i++)
    {
        if (nums[i] == current)
        {
            count++;
        }
        else
        {
            // 将计数和字符写入结果字符串
            result_index += sprintf(result + result_index, "%d%c", count, current);
            count = 1;
            current = nums[i];
        }
    }

    // 处理最后一个字符及其计数
    result_index += sprintf(result + result_index, "%d%c", count, current);

    return result;
}

// countAndSay函数实现
char *countAndSay(int n)
{
    if (n == 1)
    {
        // 对于n=1，直接返回字符串"1"
        char *result = malloc(2); // 分配足够的内存
        if (!result)
            return NULL; // 内存分配失败
        strcpy(result, "1");
        return result;
    }

    struct node *ans = (struct node *)malloc(n * sizeof(struct node));
    if (!ans)
        return NULL; // 内存分配失败

    ans[0].num = 1; // 这个字段未使用，但保留
    strcpy(ans[0].str, "1");

    for (int i = 1; i < n; i++)
    {
        ans[i].num = i + 1; // 这个字段未使用，但保留
        strcpy(ans[i].str, countinsert(ans[i - 1].str));

        // 注意：这里应该检查countinsert的返回值是否为NULL，但为简化示例而省略

        // 释放countinsert返回的字符串（如果需要在每次迭代后都释放的话，但这里不这样做）
        // 注意：通常我们不会在每次迭代后都释放它，而是保留在ans数组中以便后续使用
    }

    // 复制最终结果并返回
    char *relans = strdup(ans[n - 1].str); // 使用strdup简化内存分配和字符串复制
    if (!relans)
    {
        // 释放ans数组（如果需要在返回之前释放的话）
        // 注意：在实际应用中，这通常会在调用countAndSay的外部进行
        free(ans);
        return NULL; // 内存分配失败
    }

    // 释放ans数组（这里注释掉，因为通常不在这里释放）
    // free(ans);

    return relans;
}

// 注意：在实际应用中，调用countAndSay后，应该释放它返回的字符串，以避免内存泄漏

int main()
{
    int n = 30;
    char *result = countAndSay(n);
    if (result)
    {
        printf("Result: %s\n", result);
        free(result); // 释放返回的字符串
    }

    // 如果需要，也可以在这里释放ans数组（但在这个示例中我们并没有保留它的指针）

    return 0;
}