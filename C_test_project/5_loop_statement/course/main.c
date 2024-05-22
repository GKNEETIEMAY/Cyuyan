/***
 * 1.while:
 *  while ( condition )
    {
        code;
    }
 * 2.for:
 * for (size_t i = 0; i < count; i++)
    {
        code;
    }
 * 3.do while:
do
    {
        code;
    } while (condition);
  */

#include <stdio.h>
int main()
{
    int a = 0;
    // while
    while (a < 3) // while(1)死循环
    {
        printf("a=%d\n", a);
        a++;
    }
    // for
    for (; a > 0; a--)
    {
        printf("a=%d\n", a);
    }
    // do while
    do
    {
        printf("a=%d\n", a);
        a++;
    } while (a < 3);

    return 0;
}