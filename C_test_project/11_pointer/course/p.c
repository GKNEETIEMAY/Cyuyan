// 指针
/***
 * 内存是电脑上特别重要的存储器
 * 计算机中所有程序的运行都是在内存中进行的。
 * 为了有效的使用内存，就把内存划分成一个个小的内存单元，
 * 每个内存单元的大小是1个字节(1B)为了能够有效的访问到内存的每个单元，
 * 就给内存单元进行了 编号 ，这些编号被称为该内存单元的地址
 */
// 指针变量是用来专门存放地址的
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//如：char *pa->访问一个字节，int *pb->访问4个字节
//野指针:随机，不可知的，没有明确限制
//成因：1.指针未初始化。2.指针越界访问。3.指针指向的空间释放
//避免：1.指针初始化。2.小心指针越界。3.指针指向的空间释放及时置NULL。4.指针使用之前检查有效性。
#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("a=%d\n", a); // 10
    //&->取地址符号
    printf("a的地址=%p\n", &a); //&a->000000000061FE1C
    printf("p=%p\n", p);        // 指针的值->也就是&a->000000000061FE1C=0110 0001 1111 1110 0001 1100
    printf("p的地址=%p\n", &p); // 指针的地址->000000000061FE10

    printf("a=%d\n", *p); //*-就是解引用操作符->10
    *p = 20;
    printf("a=%d\n", a); // a改变->20

    // 指针移位,移的位数是一个数据类型(int a)的字节大小
    p = p + 1;           // 000000000061FE1C(64位，占8字节)+4(字节)=000000000061FE20
    printf("p=%p\n", p); // 000000000061FE20=0110 0001 1111 1110 0010 0000

    // 指针大小在32位机器上是4字节，64位机器上是8字节
    printf("%d\n", sizeof(int *));  // 8->64位机器
    printf("%d\n", sizeof(char *)); // 8->64位机器

    //浮点数举例子
    double r=3.14;
    double *pr=&r;
    printf("r=%.2f\n",r);
    *pr =5.5;
    printf("r=%f,*pr=r=%f\n",r,*pr);
    return 0;
    

}