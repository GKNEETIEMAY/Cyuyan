//关键字:不能跟变量名字冲突
//auto:
//break 
//extern 
//float 
//for
//sizeof
//case 
//char 
//const 
//continue 
//default 
//do 
//double 
//else 
//enum
//goto 
//if 
//it 
//long 
//register 
//return 
//short 
//signed
//static:修饰静态变量和静态函数
//struct 
//switch 
//typedef:类型定义，可理解为类型重命名，ex:typedef unsigned int unit_32
//union 
//unsigned:无符号
//void 
//volatile 
//while
//注意define不是一种关键字
#include<stdio.h>
void test()
{
    int a=1;
    static int b=1;
    a++;
    b++;
    printf("注意比较,int a=%d,static int b=%d\n",a,b);
}
int main(){

    //int float;//err

    typedef unsigned int unit_32;
    unsigned int n1=1;
    unit_32 n2=1;//n1=n2
    if(n1==n2)
    {
        printf("n1==n2\n");
    }
    
    for(int i=0;i<5;i++)
    {
        test();
    }

    return 0;
}