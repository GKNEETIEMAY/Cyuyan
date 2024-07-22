#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if(a>=b)
    {
        return a;
    }
    else{
        return b;
    }
}
//最大字符串匹配函数
int pi(char* s1,char* s2)
{
    int s1_len=strlen(s1);//s1长度
    int s2_len=strlen(s2);//s2长度
    int count=0;//最大字符长度
    int maxl=0;
    int i=0,j=0;
    while (i<s1_len)
    {
        //对s2的遍历应该小于其长度
        while(j<s1_len)
        {
            //如果匹配成功,后移
            if (s1[i]==s2[j])
            {
                i++;
                j++;
                count++;
            }
            //匹配不成功
            else{
                i++;
                j=0;
                break;
            }
            
        }
        maxl=max(maxl,count);
        count=0;
    }
    return maxl;

}
int main()
{
    char s1[100];
    char s2[100];
    int max;
    scanf("%s",&s1);
    scanf("%s",&s2);
    max=pi(s1,s2);
    printf("%d",max);
    return 0;
}