#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 


//do while ѭ�����õ����ٵ�ѭ��������Щ�����������������ڼ�����

int main()
{
	//do
	//	ѭ�����
	//while���ʽ��


	//��ӡһ��ʮ
	int i = 1;
	do
	{
		if (i == 7)
			break;                   //ʹ��continue ��Ч����while ѭ�������Ƶģ���ѭ��
		printf("%d\n", i);
		i++;
	} 
	while (i <= 10);

	return 0;
}