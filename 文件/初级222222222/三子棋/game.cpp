#define _CRT_SECURE_NO_DEPRECATE 1


#include"game.h"     //����stdio.h



void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------


//           |   |             
//        ---|---|---
//           |   |            �����ܴ�ӡ����ô���������
//        ---|---|---            
//           |   |   


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{//��Ϊ����
		for (j = 0; j < col; j++)
		{
			//1����ӡһ�е�����
			if (j < col - 1)
			{
				printf("  %c |", board[i][j]);
			}
			else
			{
				printf("  %c \n", board[i][j]);
			}
		}

		for (j = 0; j < col; j++)
		{
			//2����ӡ�ָ���
			if (j < col - 1 & i < row - 1)
			{
				printf("____|");
			}
			else if (i == row - 1 & j < col - 1)
			{
				printf("    |");
			}
			else if (j == col - 1 & i < row - 1)
			{
				printf("____");
			}
			else
			{
				printf("    ");
			}
		}
		printf("\n");
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");
	while(1)
	{
		printf("������Ҫ�µ�����>>:");
		scanf("%d%d", &x, &y);

		//x = x - 1;         //�����������Լ�д��
		//y = y - 1;

		//�ж������ѡ����ĺϷ���
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�,����������\n");
		}
	}
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������>>:\n");
	Sleep(2000);        //��<windows.h>�ʵ���ϲ�����Ҳ���ã�����λ��ms

	while(1)

	{
		//����� x y ����ѭ���ڣ�����x y �޷��������
		int x = rand() % row;   //���õ��ǣ�����һ��С�ڳ��������Ҵ��ڵ����㡣  0��1��2
		int y = rand() % col;          //rand �����ʱ��д�� test �Ŀ�ͷ��
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}


//-----------------------------------------------------------------------------------------------------------------------------------------------------


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;    //û��
			}
		}
	}
	return 1;
}


//��������������������������������������������������������������������������������������������������������������������������������������������������������������������-

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
//�����С�����������- һ������ һ���ģ����Ҳ��ǿո�
	for (i = 0; i < row; i++)
	{
	
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][1]!=' ')
		{
			return board[i][1];
		}
	}
//�����С�����������- һ������һ���ģ����Ҳ��ǿո�
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

//б����������������- б������һ���ģ����Ҳ��ǿո�----�������
	if (board[0][0] == board[2][2] && board[0][0] == board[1][1] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';

}

