// 猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 菜单
void menu()
{
    printf("---------------------------------\n");
    printf("-----  1.play   0.exit  ---------\n");
    printf("---------------------------------\n");
}
// 游戏部分
void game()
{
    // C 库函数 int rand(void) 返回一个范围在 0 到 RAND_MAX 之间的伪随机数。
    // RAND_MAX 是一个常量，它的默认值在不同的实现中会有所不同，但是值至少是 32767。
    int ret = rand() % 100 + 1; // 设置随机数
    int guess;
    while (1)
    {
        printf("请输入你猜的数字>");
        scanf("%d", &guess);
        if (guess > ret)
        {
            printf("猜大了,\n");
        }
        if (guess < ret)
        {
            printf("猜小了,\n");
        }
        if (guess == ret)
        {
            printf("恭喜你,猜对了！\n");
            break;
        }
    }
}
// 主程序
int main()
{
    int input = 0;
    // C 库函数 void srand(unsigned int seed) 播种由函数 rand 使用的随机数发生器。
    // 初始化随机数发生器
    // time时间戳：当前时间-计算机起始时间(1970年1月1日 0:0:0),的秒数
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入你的选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏...\n");
            break;
        default:
            printf("输入错误,请重新选择\n");
            break;
        }
    } while (input);
    return 0;
}