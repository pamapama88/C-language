#define _CRT_SECURE_NO_DEPRECATE 1
#include"game.h"



void menu()
{
	printf("*****************************************\n");
	printf("***********      1��play      ***********\n");
	printf("***********      0��exit      ***********\n");
	printf("*****************************************\n");

}


void game()
{
//�׵���Ϣ����
	//1�����úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };   //�������������


	//2���Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };  //����ܿ���������

//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');   //�������ϵĶ�������Ϊ0
	InitBoard(show, ROWS, COLS, '*');  //�������ϵĶ�������Ϊ*

//չʾ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);     //���� �����벻Ҫ����
	//DisplayBoard(show, ROW, COL);    


//�ҳ��׵������Ϣ,����
	FindMine(mine,show,ROW,COL);

}



void test()
{
	srand((unsigned int)time(NULL));


	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>>:");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
		default:
			printf("��������������TMѡ���˰ɣ��뿴������ѡ>>:\n");
			break;
		}
	} while (input);
}



int main()
{
	test();
	return 0;
}
