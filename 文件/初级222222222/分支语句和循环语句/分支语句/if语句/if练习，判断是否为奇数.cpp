#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
//��ϰ
//1.�ж�һ�����Ƿ�Ϊ����
//2.���һ��һ��֮�������


int main2()
{
	int go = 1;
	while (go<= 100)
	{
		if (go % 2 == 1)
			printf("%d    ", go);
		go++;
	}

	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");


	int input = 0;
	scanf("%d", &input);
	if (input % 2 == 1)
		printf("%d������\n", input);
	else
		printf("%d��ż��\n", input);


//���Ͼ������Լ�������ҵ




	//������ţ���Ƶ�д  i=1. Ȼ���ӡ,Ȼ���ٴ�ӡ i+=2,��ͦͶ��ȡ�ɵ�
	return 0;
}
