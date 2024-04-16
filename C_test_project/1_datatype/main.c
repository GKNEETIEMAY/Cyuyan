#include <stdio.h>
// 了解数据类型所占的长度，单位：字节(Byte)
// 1 Byte = 8 bit
int main()
{
    printf("char的长度:%d\n", sizeof(char));           // 1
    printf("short的长度:%d\n", sizeof(short));         // 2
    printf("int的长度:%d\n", sizeof(int));             // 4
    printf("long的长度:%d\n", sizeof(long));           // 4
    printf("long long的长度:%d\n", sizeof(long long)); // 8
    printf("float的长度:%d\n", sizeof(float));         // 4
    printf("double的长度:%d\n", sizeof(double));       // 8
    return 0;
}