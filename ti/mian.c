#include<stdio.h>
long long howmany(int n){
    if(n<=2)
    {
        return 1;
    }
    long long dp[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=0;
    }
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<n;i++)
    {
        dp[i]=dp[i-1]+dp[i-3];
    }
    long long ans=dp[n-1];
    return ans;
}
int main()
{
    int n;//台阶数；
    long long tiao=0;
    printf("输入台阶数：\n");
    scanf("%d",&n);
    tiao=howmany(n);
    printf("%lld\n",tiao);
    return 0;
}