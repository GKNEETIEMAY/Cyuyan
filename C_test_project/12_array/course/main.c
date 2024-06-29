/**
 * 1.一维数组的创建与初始化
 */
#include<stdio.h>
#include<string.h>
int main(){
    int arr1[10]={};//一维数组的创建
    int count =9;
    int arr2[count];//
    int arr3[10]={1,2,3};//一维数组的创建和不完全初始化，剩下的元素默认为0
    printf("nu%d",arr3[0]);
    char arr4[3]={'a',98,'c'};//不能当作字符串处理，printf("nu%s",arr4);要加\0,且扩大空间
    printf("%d,%d\n",sizeof(arr4),strlen(arr4));
    int a=0;
    return 0;
}