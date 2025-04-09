#include<stdio.h>
bool judge1(int *num,int numSize,int m,int n)//判断第二个数字，是否在数组中且不与第一个数字存在数字冲突
{
    int m1=m/100;
    int m2=(m-m1)/10;
    int m3=m-(m1*100)-(m2*10);
    int n1=n/100;
    int n2=(n-n1)/10;
    int n3=n-(n1*100)-(n2*10);
    //判断冲突
    if(n1==m1||n1==m2||n1==m3)
    {
        return false;
    }
    if(n2==m1||n2==m2||n2==m3)
    {
        return false;
    }
    if(n3==m1||n3==m2||n3==m3)
    {
        return false;
    }
    //判断n1在num中   
    for(int i=0;i<numSize;i++)
    {
        if(num[i]==n1)
        {
        }
    }

    return true;

}
bool judge2(int *num,int numSize,int m,int n,int k)//判断第三个数字，是否在数组中且不与第一，二个数字存在数字冲突
{

}
int **fan(int *num,int numSize,int *returnsize,int **returncolsize)
{
    int **ans=(int **)malloc(100*sizeof(int*));//防止溢出
    *returnsize=0;//行，每行每次三列
    //(*returncolsize)[i]=malloc(100*sizeof(int));
    //ans[i]=(int *)malloc(3*sizeof(int));
    //构造一个三位数，123，124....789
    for(int i=0;i<numSize-2;i++)
    {
        for(int j=i+1;j<numSize-1;j++)
        {
            for(int k=j+1;k<numSize;k++)
            {
                int temp=num[i]*100+num[j]*10+num[k];
                int temp2=2*temp;
                //超过三位数，直接out,3temp必然也超过
                if(temp2>1000)
                {
                    break;
                }
                //数字冲突，直接结束
                if(judge1(num,numSize,temp,temp2)==false)
                {
                    break;
                }
                //判断一次,不成功直接break;
                int temp3=3*temp;
                //同理，判断temp2,temp3,每位数字都在num中且与另外两个不重复
                if(judge2(num,numSize,temp,temp2,temp3)==false)
                {
                    break;
                }
                //装入返回的二维数组中->动态内存申请
                ans[(*returnsize)]=(int *)malloc(3*sizeof(int));
                ans[(*returnsize)][0]=temp;
                ans[(*returnsize)][1]=temp2;
                ans[(*returnsize)][2]=temp3;
                (*returnsize)++;
            }
        }
    }
    return ans;
}
int main()
{
    int num[9]={1,2,3,4,5,6,7,8,9};
    int num_size=9;
    int 
    return 0;
}