#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char board[ROW][COL], int row, int col);//��������
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);//Ҫ�ж�����״̬  ���Ӯ-'*'  ����Ӯ-'#'   ƽ��-'Q'  ����-'C'
int IsFull(char board[ROW][COL], int row, int col);//����1�������� ����0 ����û��

