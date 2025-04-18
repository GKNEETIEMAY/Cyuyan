/* 字符串：由双引号引起的一串字符
 * 字符串以\0结尾，\0不能当作字符串字面值 */
#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[] = "abc";                 // 字符串:abc\0,\0为字符串结束的标志
    char arr2[] = {'a', 'b', 'c', '\0'}; // 要使用0，结尾，否则会出现异常的打印
    char arr3[] = {'a', 'b', 'c', 0};
    char arr4[] ={0};
    int i;
    // printf("%s\n",arr1[0]);//error:Segmentation fault,原因是%c用于单个字符，%s用于整个字符串
    printf("arr1=%s\n", arr1);
    printf("arr2=%s\n", arr2);
    arr2[0] = 'd';
    printf("arr2=%s\n", arr2);
    // strlen()是求字符串长度
    printf("arr2的长度是%d\n", strlen(arr2));//不含'\0'
    printf("arr2的长度是%d\n", sizeof(arr2)/sizeof(arr2[0]));//含'\0'
    for (i = 0; i < 4; i++)
    {
        printf("arr2[%d]=%c\n", i, arr2[i]);
    }
    if (arr2[3] == arr3[3])
    {   //'\0'-转义字符(ASCII码)-0
        //0->数字-0，值上等价于'\0'
        //'0'->字符0-转义字符->48
        printf("arr2[3]与arr3[3]的结尾用0和\\0是一样的!\n");
    }

    return 0;
}