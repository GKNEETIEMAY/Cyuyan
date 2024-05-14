/***
 * 结构体-描述复杂对象
 */
#include<stdio.h>
struct Book
{
    char name[20];
    char author[20];
    float price;
    int copyright;

}book;

int main()
{
    struct Book a={"cyuyan","lxl",20.5,10001};
    printf("a书的价格是:%f\n",a.price);


    return 0;
}