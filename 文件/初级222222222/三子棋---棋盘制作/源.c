#define _CRT_SECURE_NO_DEPRECATE 1
#define row 50
#define col 40


//�˴��봿�ֹ��������翴������ģ��뿴ͬ�ļ��еġ������Ż���


#include<stdio.h>
void InitBoard(char board[row][col], int ROW, int COL)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//           |    |             
//       ____|____|____
//           |    |            �����ܴ�ӡ����ô���������
//       ____|____|____           
//           |    |   
//           |    |   
int main()
{


	char board[row][col] = { 0 };
	InitBoard(board,row,col);


	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{//��Ϊ����
		for (j = 0; j < col; j++)
		{
			//1����ӡһ�е�����
			if(j<col-1)
			{
				printf("  %c |", board[i][j]);
			}
			else
			{
				printf("  %c \n",board[i][j]);
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




	return 0;
}