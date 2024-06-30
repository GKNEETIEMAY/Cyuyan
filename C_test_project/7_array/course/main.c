/**
 * 1.一维数组的创建与初始化
 * 2.数组是通过下标来访问的，数组的下标从0开始。
 * 数组的下标可以通过计算得到。
 * 3.数组在内存中是连续存放的。
 * 4.二维数组的创建与初始化。
 * 5.数组作为函数参数。
 * 6.数组名就是首元素的地址。
 * 但是两个例外:
 * (1).sizeof(数组名)->此时表示整个数组，单位是字节。
 * (2).&数组名,代表的是取出整个数组的地址
 * 
 */
#include<stdio.h>
//冒泡升序
void bubble_sort(int *nums,int numsSize){
    int temp;//暂存
    int n=0;//确定冒泡次数
    for (int i = 0; i < numsSize; i++)
    {
        int flag=1;//假设本排序已经有序
        for (int j = numsSize-1; j>i; j--)
        {
            n++;
            if(nums[j]<nums[j-1])
            {
                temp=nums[j-1];
                nums[j-1]=nums[j];
                nums[j]=temp;
                flag=0;//如果发生交换，说明无序，flag置0
            }
        }
        //确定有序那么就退出排序
        if(flag ==1){
            break;
        }
    }
    printf("一共冒了%d次\n",n);
}
#include<string.h>
int main(){
    int arr1[10]={};//一维数组的创建
    int count =9;
    int arr2[count];//
    int arr3[10]={1,2,3};//一维数组的创建和不完全初始化，剩下的元素默认为0
    printf("niu%d",arr3[0]);
    char arr4[3]={'a',98,'c'};//不能当作字符串处理，printf("nu%s",arr4);要加\0,且扩大空间
    printf("%d,%d\n",sizeof(arr4),strlen(arr4));
    //int a=0;
    //scanf("%d\n",&a);
    //printf("a=%d",a);
    printf("---------------分割线--------------\n");
    //二维数组 type name[行][列]
    int arr5[3][3];//三行三列二维数组
    char ch1[3][5];
    double arr6[7][3];
    //二维数组初始化
    int arr7[3][4]={1,2,3,4,5};//先行后列，之后未填满，默认为0
    int arr8[3][4]={{1,2,3},{4,5}};
    int arr9[][4]={{1,2},{3},{4},{5}};//列不能省略，行可以
    printf("---------------分割线--------------\n");
    int arr10[]={9,2,3,10,16};
    int numsSize;
    numsSize=sizeof(arr10)/sizeof(arr10[0]);
    bubble_sort(arr10,numsSize);//对函数传递数组参数，实际上传递的是数组首元素的地址，&arr10[0]
    for(int i=0;i<numsSize;i++){
        printf("%d ",arr10[i]);
    }
    printf("\n---------------分割线--------------\n");
    printf("数组名=%p\n",arr10);
    printf("数组首元素地址=%p\n",&arr10[0]);
    printf("*arr10=>arr10[0]=%d\n",*arr10);
    printf("*(arr10+1)=>arr10[1]=%d\n",*(arr10+1));
    printf("arr10[0]=%d\n",arr10[0]);
    printf("arr10[1]=%d\n",arr10[1]);
    printf("\n---------------分割线--------------\n");
    printf("数组名=%p\n",arr10);
    printf("数组首元素地址=%p\n",&arr10[0]);
    printf("整个数组的首地址=%p\n",&arr10);
    printf("\n---------------分别加1之后--------------\n");
    printf("数组名=%p\n",arr10+1);
    printf("数组首元素地址=%p\n",&arr10[0]+1);
    printf("整个数组的首地址=%p\n",&arr10+1);





    return 0;
}