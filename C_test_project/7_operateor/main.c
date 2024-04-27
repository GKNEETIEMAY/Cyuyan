/*操作符
 * 算数操作符：+、-、*、/、%
 * 移位操作符：>>、<<
 * 位操作符：&、|、^(异或)
 * 赋值操作符：=、+=、-=、*=、/=、&=、|=、>>=、<<=、^=（以上两个的都是复合赋值符）
 * 单目操作符：！(逻辑取反)、-(负)、+(正)、&(取地址)、sizeof、~(按位取反)、--、++、(类型):(int)、*(间接访问)
 * 关系操作符：
 * 
*/
#include<stdio.h>
int main(){
    int a=99,b=9;//a=1100011、b=0001001
    int c;
    //算数操作:
    printf("a+b=%d\n",a+b);//+，108
    printf("a-b=%d\n",a-b);//-，90
    printf("a*b=%d\n",a*b);//*，891
    printf("a/b=%d\n",a/b);///，11
    printf("a%%b=%d\n",a%b);//%，0
    //移位操作，注意看定义的数据类型
    printf("b>>1=%d\n",b>>1);//右移一位，1001->0100=4
    printf("b<<1=%d\n",b<<1);//左移一位，1001->10010=18
    //位操作（2进制）
    printf("a&b=%d\n",a&b);//按位与，a&b=000001=1
    printf("a|b=%d\n",a|b);//按位或，a|b=1101011=107
    printf("a^b=%d\n",a^b);//按位异或，a^b=1101010=106
    return 0;
}