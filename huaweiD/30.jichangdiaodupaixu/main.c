#include<stdio.h>
#include<string.h>
typedef struct Hb{
    char name[7];
} hb;
void B_sort(hb *H,int len)
{
    char s_temp[7]={0};
    int flag=1;
    for (int i = 0; i < len-1; i++)
    {
        for (int j = len-1; j > i; j--)
        {
            if (strcmp(H[j].name,H[j-1].name)<0)
            {
                strcpy(s_temp,H[j-1].name);
                strcpy(H[j-1].name,H[j].name);
                strcpy(H[j].name,s_temp);
                memset(s_temp,0,7);
                flag=0;
            }
            
        }
        if (flag==1)
        {
            break;
        } 
    }
    return;  
}
int main(){
    hb H[100];
    int len=0;
    for (int i = 0; i < 100; i++)
    {
        int j = 0;
        for (; j < 6; j++)
        {
            scanf("%c",&H[i].name[j]);  
        }
        H[i].name[6]='\0';
        if (getchar()==',')//吃掉逗号
        {
            len++;
        }
        else{
            break;
        }
        
    }
    B_sort(H,len+1);
    for (int i = 0; i <=len; i++)
    {
        printf("%s",H[i].name);
        if (i<len)
        {
            printf(",");
        }
    }
    return 0;
}