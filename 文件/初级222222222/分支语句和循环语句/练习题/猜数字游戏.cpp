#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>




void menu()
{
	printf("***********************************\n");
	printf("****     1.play     0.exit      ***\n");
	printf("***********************************\n");
}


#define RAND_MAX 0x7FFF

void game()
{
	int r = 0;                                         
	int guess = 0;


	//��ʹ��rand֮ǰ������srand�����Ǹ��������һ����������

	//srand(2);      //����һ��������
	//�����������������������ģ���Ȼ����������������˳����һ���ģ��㱳��������
	//����������ʱ����������������������㡣
	//ʱ���                                                 time��<time.h>��
	//time_t time(time_t*timer);
	//    srand((unsigned int)time(NULL));    �������������������������һ�ξ����ˣ���game���������ᱻ�������ã����Ի����һЩBUG��
	//�������ǰ����ŵ�����������


	r=rand()%100+1;  //��Ϊ32767̫���ˣ��۾�ȡ������һ�ٵ�����������������϶���С��100�ģ���1~99֮�䣬�����Ǹ�������һ��1���ͱ����100�����ڵ����ˡ����Բ°�
	//printf("%d\n", r);

	while (1)
	{
		printf("�������\n");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�������\n");
			break;
		}
	}

}




int main2()
{
	srand((unsigned int)time(NULL));    //����������������ֻ��Ҫ����һ�ξͿ��ԡ�

	int e = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (e);


	return 0;
}







