#define _CRT_SECURE_NO_DEPRECATE 1


#include<stdio.h>           //��Ϊ���е�Դ�ļ������������ͷ�ļ����������ǰ�stdio.h�ŵ������ô������Դ�ļ��Ͳ�Ҫ������
#include<stdlib.h>          
#include<time.h>
#include<Windows.h>


//�궨��

#define ROW 3   //��
#define COL 3   //��

//����һ��

void InitBoard(char board[ROW][COL],int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL],int row,int col);
//Ӧ���ܸ�����������״̬
//1��û��Ӯ�ң�������Ϸ����'C'
//2�����Ӯ����������������'*'
//3������Ӯ����������������'0'
//3��ƽ�֡�����������������'Q'


