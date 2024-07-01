#include "game.h"
#include <stdio.h>
void init_Board(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}
//  *  |  *  |  *
//-----|-----|-----
//  *  |  *  |  *
//-----|-----|-----
//  *  |  *  |  *
// 打印棋盘格
void print_Board(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        // 打印行
        for (int j = 0; j < col; j++)
        {
            printf("  %c  ", board[i][j]);
            // 打印行后面的分割 |
            if (j < col - 1)
            {
                printf("|");
            }
        }
        // 打印行下面的分割区间
        if (i < row - 1)
        {
            printf("\n");
            for (int j = 0; j < col; j++)
            {
                printf("-----");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
    printf("\n");
}
int a, b;
void player1(char board[ROW][COL], int row, int col)
{
    printf("请玩家一下棋(行,列):");
    scanf("%d,%d", &a, &b);
    if ((a - 1 >= 0 && a - 1 < row) && (b - 1 < col && b - 1 >= 0))
    {
        if (board[a - 1][b - 1] == ' ')
        {
            board[a - 1][b - 1] = '*';
        }
        else
        {
            printf("此位置已经被占,请玩家重新输入>\n");
            player1(board,ROW,COL);
        }
    }
    else
    {
        printf("超出棋盘大小...\n");
        player1(board,ROW,COL);
    }
}
void player2(char board[ROW][COL], int row, int col)
{
    printf("请玩家二下棋(行,列):");
    scanf("%d,%d", &a, &b);
    if ((a - 1 >= 0 && a - 1 < row) && (b - 1 < col && b - 1 >= 0))
    {
        if (board[a - 1][b - 1] == ' ')
        {
            board[a - 1][b - 1] = '#';
        }
        else
        {
            printf("此位置已经被占,请玩家重新输入>\n");
            player2(board,ROW,COL);
        }
    }
    else
    {
        printf("超出棋盘大小...\n");
        player2(board,ROW,COL);
    }
}
bool verify1(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(board[i][j]=='*')
            {

            }
        }
        
    }
    return false;
}
bool verify2(char board[ROW][COL], int row, int col)
{
    return false;
}
//平局
bool verify3(char board[ROW][COL], int row, int col)
{
    int count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(board[i][j]!=' ')
            {
                count=count+1;
            }
        }
    }
    if(count==(row*col)){
        return true;
    }
    else{
        return false;
    }
}