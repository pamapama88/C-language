#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//��ʦ˵ is_prime (�� ����)������ţ�ƣ����Թ涨���

int is_prime(int x)
{
	int back_num = 1;
	switch (x%2)
	{
	case 0:
		back_num = 0;
	default:
		switch (x%3)
		{
		case 0:
			back_num = 0;
		default:
			switch (x%5)
			{
			case 0:
				back_num = 0;
			default:
				switch (x%7)
				{
				case 0:
					back_num = 0;
				default:
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	
	return back_num;
}

//�ð�,���Լ�д��ȷʵ�е�ˣ���ʵ��Ƕ��Ҳ���ԣ����Ҿ�������һ��
//������������д�İ�
//����������

int is_peng(int n)
{
	int peng = 0;
	for (peng = 2; peng <=sqrt(n); peng++)           //�������Ż���һ�£������Ż�ǰ��       for (peng = 2; peng < n; peng++)
	{                                                //sqrt() ���������ֵ��ƽ����,,sqrt()�����ķ���ֵ�� double�͡�
		if (n % peng == 0)
			return 0;          //�������������ֱ�ӽ���
	}
	return 1;
}


int main3()
{
	//��ӡ0~200֮�������
	int first = 0;
	printf("�����ҵ�����\n");
	for (first = 0; first <= 200; first++)
	{
		if (is_prime(first) == 1)
		{
			printf("%d  �� ", first);
		}
	}
	printf("���������������\n");

	for (first = 0; first <= 200; first++)
	{
		if (is_peng(first) == 1)
		{
			printf("%d  �� ", first);
		}
	}

	printf("�������̫ʧ���ˣ���Ȼû��ʮ���ڵ���\n");





	return 0;
}