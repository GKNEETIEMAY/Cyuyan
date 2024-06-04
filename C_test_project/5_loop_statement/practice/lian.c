/***
 * 练习：
 * 1.求n!
 * 2.求1!+2!+...+10!
 * 3.在有序数组v[n]中查找某个数字x
 * 4
 */
#include<stdio.h>
//递归求阶乘，解1，2
int y(int x){
    if(x>0){
    return x*y(x-1);
    }
    else{
        return 1;
    }
}
//在有序数组v[n]中查找某个数字x
int binsearch(int x,int v[],int n){

}
int main(){
    int x;
    printf("请输入一个数字x:\n");
    scanf("%d",&x);
    printf("%d的阶乘是:%d\n",x,y(x));
    printf("--------------------------------\n");
    int sum=0;
    for(int i=1;i<11;i++){
        sum=y(i)+sum;
    }
    printf("1!+2!+...+10!=%d\n",sum);
    return 0;
}