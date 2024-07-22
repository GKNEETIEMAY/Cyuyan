#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool judge(char *s)
{
    char mp[128] = {};
    mp[')'] = '(';
    mp[']'] = '[';
    mp['}'] = '{';

    int top = 0; // 直接把 s 当作栈
    for (int i = 0; s[i]; i++)
    {
        char c = s[i];
        if (mp[c] == 0)
        {                 
            s[top++] = c; // 左括号,入栈
        }
        else if (top == 0 || s[--top] != mp[c])
        {                 
            return false; // 发现右括号，进行比较,没有左括号，或者左括号类型不对
        }
    }
    return top == 0; // 所有左括号必须匹配完毕，即top==0是true
}
int main()
{
    char s[105];
    scanf("%s", &s);
    if (judge(s))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}