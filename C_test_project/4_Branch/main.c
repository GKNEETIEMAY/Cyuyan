#include<stdio.h>
#include<stdbool.h>
int main(){
    int a=5;
    int b=6;
    bool c;
    c=a>b?true:false;
    if(c){
        printf("big a\n");
    }
    else
    {
        printf("big b");
    }
    return 0;
}