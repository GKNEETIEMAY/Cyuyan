#ifndef __GAME_H__//防止一个头文件被重复引用多次
#define __GAME_H__
#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
//函数的声明
#define ROW 0
#define COL 0
void init_Board(char board[ROW][COL],int row,int col); //三字棋游戏声明
void print_Board(char board[ROW][COL],int row,int col);
void player1(char board[ROW][COL],int row, int col);
void computer(char board[ROW][COL],int row, int col);
bool verify1(char board[ROW][COL], int row, int col);
bool verify2(char board[ROW][COL], int row, int col);
bool verify3(char board[ROW][COL], int row, int col);
#endif //__GAME_H_