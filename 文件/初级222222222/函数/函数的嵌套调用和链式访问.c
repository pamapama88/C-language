#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void new_line()
{
	printf("SB\n");
}

void three_line()
{
	int d = 0;
	for (d = 0; d < 3; d++)
	{
		new_line();
	}
}


int main8()
{
	three_line();
	printf("%d", printf("%d", printf("%d", 43)));     //pirntf�ķ���ֵ����ȷʵ�� int �������ķ���ֵ�Ǵ�ӡ���ַ��ĸ���

	return 0;
}


