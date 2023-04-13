#define _CRT_SECURE_NO_DEPRECATE 1

#include"game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1 ; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;  //��ʾ�׵ĸ�����ÿ����һ���ף�������һ�������������ʱ��whileѭ��Ϊ�٣���ֹͣѭ��
	while (count > 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}


int get_mine_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';  //�ַ�123-�ַ�0�͵�������123	        
	                                //8*��0����ʾ8���ַ���
}




void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < ROW*COL-EASY_COUNT)
	{
		printf("�������Ų��׵�����>>>:");
		scanf("%d%d", &x, &y);

		if (x >= 1 && x <= row && y <= col && y >= 0)
		{
			//����Ϸ�
			if (mine[x][y] == '1')
			{
				printf("���ź��㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else   //��ʾû�ȵ��ף�Ӧ��ͳ����Χ����
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		
			if (win == ROW * COL - EASY_COUNT)
			{
				printf("��ϲ�㣬����!!!!!!!!!!!!\n");
			}

		}
		else
		{
			printf("��������Ƿ������������롷����");
		}
	}


}

