#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

int main6()
{
	int a = 10;
	int* pa = &a;  //��ͽ�һ��ָ��

	int** ppa = &pa;   //��ͽ� ����ָ��      ��������������޼�ָ��
	*pa = 20;
	printf("%d\n", **ppa);


	
	return 0;
}