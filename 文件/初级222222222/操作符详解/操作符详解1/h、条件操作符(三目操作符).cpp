#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//  exp1 ? exp2 : exp3;

int main8()
{
	int a = 0;
	int b = 0;

	b = (a > 5 ? 3 : -3);

	printf("��Ŀ��������������%d\n", b);     //��� -3


	//�Ƚϴ�С
	a = 65;
	b = 45;
	int max = (a > b ? a : b);

	//ע�⣺��Ϊ�����׿��������Բ�Ҫд��̫����

	return 0;
}