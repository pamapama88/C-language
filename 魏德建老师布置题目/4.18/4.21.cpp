#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main2()
{
	int a = 100;
	int b = 0;
	int c = 0;
	int d = 0;
	for (a = 100; a <= 999; a++)
	{
		b = a / 100;           /*��λ��*/
		c = a / 10 % 10;         /*ʮλ��*/
		d = a % 10;         /*��λ��*/
		if (a == b * b * b + c * c * c + d * d * d)
		{
			printf("�ҽ�  %d\n", a);
		}
	}
	return 0;

}