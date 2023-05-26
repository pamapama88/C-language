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


void get_mine_count(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
	int around = mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';  //�ַ�123-�ַ�0�͵�������123	        
	                                //8*��0����ʾ8���ַ���
	if (0 < x <= ROW && 0 < y <= COL)
	{
		if (0 == around && '*' == show[x][y])
		{

			show[x][y] = ' ';

			get_mine_count(mine, show, x + 1, y);
			get_mine_count(mine, show, x + 1, y + 1);
			get_mine_count(mine, show, x + 1, y - 1);
			get_mine_count(mine, show, x - 1, y);
			get_mine_count(mine, show, x - 1, y + 1);
			get_mine_count(mine, show, x - 1, y - 1);
			get_mine_count(mine, show, x, y + 1);
			get_mine_count(mine, show, x, y - 1);


		}
		else if (0 != around)
		{
			show[x][y] = around + '0';
		}
	}
}

int IsWin(char show[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	int unknow = 0;
	for (i = 1; i <= col; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if ('*' == show[i][j])
			{
				unknow++;
			}
		}
	}
	return unknow;
}
  


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = ROW*COL;

	while (win >= EASY_COUNT)
	{
		printf("������������������Ų��׵�����>>>:");
		scanf("%d%d", &x, &y);
		system("cls");       //system��ִ��ϵͳ�����һ��������---cls���ʾ�����Ļ  ����<stdlib.h>��
		int ret = 1;

		if (x >= 1 && x <= row && y <= col && y >= 0)
		{
			//����Ϸ�
			if (mine[x][y] == '1')
			{
				if (ROW * COL == win)
				{
					mine[x][y] == '0';

					while (ret)
					{
						int xx = rand() % row + 1;
						int yy = rand() % col + 1;
						if ('0' == mine[xx][yy])
						{
							mine[xx][yy] = '1';
							ret = 0;
						}
					}
				}
				else
				{
					printf("����������ը������\n");
					DisplayBoard(mine, row, col);
					break;
				}
			}
			else   //��ʾû�ȵ��ף�Ӧ��ͳ����Χ����
			{
				get_mine_count(mine,show, x, y);
				DisplayBoard(show, row, col);
				win=IsWin(show, ROW, COL);
				printf("��ǰδ̽�������飺%d\n", win);

			}
		
			if (win == EASY_COUNT)
			{
				printf("���ܹ�ϲ�㣬����!!!!!!!!!!!!���붴����\n");
				break;
			}
			else if (0 == ret)
			{
				printf("���� NB����ʵ������ĵڶ�����\n");
				get_mine_count(mine, show, x, y);
				DisplayBoard(show, row, col);
				win = IsWin(show, ROW, COL);
				printf("��ǰδ̽�������飺%d\n", win);
			}

		}
		else
		{
			printf("��������������TM���������Ƿ�֪��������������䡷����");
		}
	}


}

