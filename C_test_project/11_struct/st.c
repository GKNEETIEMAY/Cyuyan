/***
 * 结构体-描述复杂对象
 */
#include <stdio.h>
#include <string.h>
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
    //.操作符找结构体变量的成员时：变量.成员
    printf("a书的版号是:%d\n", (*pa).copyright); // 法1：结构体利用指针需要加括号
    //->操作符找到结构体变量的成员时：指针->成员
    printf("a书的作者是:%s\n", pa->author); // 法2：指针指向对象的内部成员

    a.price = 35.9; // 变量可以直接更改
    printf("a书的名字是:%s\n", a.name);
    // a.name="c++";//数组不能直接更改
    strcpy(a.name, "c++");
    printf("更改后的a书的名字是:%s\n", a.name);
    return 0;
}