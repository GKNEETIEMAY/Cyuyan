#include<stdbool.h>//bool变量的函数定义，在此编译器中必须要用“stdbool.h”头文件
bool isPalindrome(int x) 
{
    int a,b=0,j=10,d;
    int c[25];    
    a=x;
    if(a<0)
    {
        printf("false");
        return false;
    }
    else
    {
        while(a>=10)
        {
            a=a/10;
            b=b+1;
        }
        b=b+1;
        d=b;
        for(int i=1;i<=b;i++)
        {
            c[i]=x%j;
            x=x/j;
        }
        for(int k=1;k<=b/2+1;k++,d--)
        {
            if(c[k]!=c[d]){
                printf("false");
                return false;
            }

        }
        printf("true");
        return true;
    }

    
}