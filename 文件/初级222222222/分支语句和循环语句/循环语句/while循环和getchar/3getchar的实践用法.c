#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h> 


int main3() {
	char password[20] = { 0 };
	int ret = 0;
	printf("����������:>");
	scanf("%s", password);         //���ַ����뵽�����뻺������Ȼ��scanf��������������֣�ʣ������������õ�һ���س�����\n
	printf("��ȷ�ϣ�Y.N��"); 
	getchar();                   //getchar ��ʣ�µ�\n ������  ��\n��ASCII�����ʮ������10������ret =10������Ҫ���������һ��getchar ��ȡ�����\n
	ret = getchar();               

	if (ret == 'Y') {
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("����ȷ��");
	}
	return 0;
}