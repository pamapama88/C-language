//����������
//��дһ������˼·�Ĳ��ԣ�����������û�д����⣬����Ϊһ����ܿ�չ����Ĵ����д

#define _CRT_SECURE_NO_DEPRECATE 1

#include"game.h"     //stdio.h 


void menu()
{
	printf("*****************************************\n");
	printf("****    1��play          0��exit    *****\n");
	printf("*****************************************\n");

}

void game()
{
	char ret = ' ';

	//����һ�����顪�������Һ͵��Ե�������Ϣ
	char board[ROW][COL] = {0};   //�к�����game.c�ļ��ͨ�� ͷ�ļ����ý�����

	//��ʼ������
	InitBoard(board, ROW, COL);   //���̵ĳ�ʼ����ͷ�ļ���

	//��ӡ����
	DisplayBoard(board,ROW,COL);

	//��һ����һ��  ����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		system("cls");       //system��ִ��ϵͳ�����һ��������---cls���ʾ�����Ļ  ����<stdlib.h>��
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//��������
		ComputerMove(board, ROW, COL);
		system("cls");       //system��ִ��ϵͳ�����һ��������---cls���ʾ�����Ļ  ����<stdlib.h>��
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}

	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='0')
	{
		printf("����Ӯ\n");
	}
	else if(ret='Q')
	{
		printf("ƽ��\n");
	}

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("��ѡ�񡷡���");
		scanf("%d", &input);
		system("cls");       //system��ִ��ϵͳ�����һ��������---cls���ʾ�����Ļ  ����<stdlib.h>��

		switch(input)
		{
			case 1:
				printf("������\n");
				game();
				break;
			case 0:
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);  //���do while ѭ����Ϊ��������һ��һ�������Ϸ��
	                  //��inputΪ0������Ϊ�٣�ʱ������ѭ������inputΪ1������Ϊ�棩ʱ����ʼ��һ��ѭ����

}



int main()
{

	test();

	return 0;
}