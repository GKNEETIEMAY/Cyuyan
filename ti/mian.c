#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool judge(char *s){
    int len=strlen(s);
    int low=0,high=len-1;//从字符串两头遍历
    while (low<high)
    {
        //(),[],{}
        if (s[low]=='('&&s[high]==')')
        {
            low++;
            high--;
        }
        else if (s[low]=='['&&s[high]==']')
        {
            low++;
            high--;
        }
        else if (s[low]=='{'&&s[high]=='}')
        {
            low++;
            high--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char s[105];
    scanf("%s",&s);
    if(judge(s))
    {
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}