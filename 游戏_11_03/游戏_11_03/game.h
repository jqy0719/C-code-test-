#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);//声明函数
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//要判断四种状态  玩家赢-'*'  电脑赢-'#'   平局-'Q'  继续-'C'
int IsFull(char board[ROW][COL], int row, int col);//返回1棋盘满了 返回0 棋盘没满

