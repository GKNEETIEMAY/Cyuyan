// 模块化编写游戏三子棋
#include "game.h"
void game()
{
    char board[ROW][COL];
    init_Board(board, ROW, COL);
    print_Board(board, ROW, COL);
    while (true)
    {
        printf("请玩家下棋(行,列)>");
        player1(board, ROW, COL);
        print_Board(board, ROW, COL);
        if (verify1(board, ROW, COL)==true)
        {
            printf("玩家获胜!\n");
            break;
        }
        if (verify3(board, ROW, COL)==true)
        {
            printf("平局...\n");
            break;
        }
        printf("电脑下棋>\n");
        computer(board, ROW, COL);
        print_Board(board, ROW, COL);
        if (verify2(board, ROW, COL)==true)
        {
            printf("电脑获胜!\n");
            break;
        }
        if (verify3(board, ROW, COL)==true)
        {
            printf("平局...\n");
            break;
        }
        
    }
}
void menu()
{
    printf("\n");
    printf("------------------------------\n");
    printf("-------1.play----0.exit-------\n");
    printf("------------------------------\n");
    printf("\n");
}
void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入你的选择>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            printf("进入->三字棋\n");
            game();
            break;
        case 0:
            printf("退出游戏...\n");
            break;
        default:
            printf("输入错误,请重新选择......\n");
            break;
        }
    } while (input);
}
int main()
{
    test();
    return 0;
}