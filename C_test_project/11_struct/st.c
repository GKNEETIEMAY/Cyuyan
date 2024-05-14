/***
 * 结构体-描述复杂对象
 */
#include <stdio.h>
struct Book
{
    char name[20];   // 书名
    char author[20]; // 作者
    float price;     // 价格
    int copyright;   // 版号

} book;

int main()
{
    struct Book a = {"cyuyan", "lxl", 20.5, 10001}; // 定义a书
    // book b;
    printf("a书的价格是:%.3f元\n", a.price);
    struct Book *pa = &a;
    printf("a书的版号是:%d\n", (*pa).copyright); // 法1：结构体利用指针需要加括号
    printf("a书的作者是:%s\n", pa->author); // 法2：指针指向位置
    return 0;
}