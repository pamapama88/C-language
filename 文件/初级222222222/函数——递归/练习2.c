#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//��д����������������ʱ���������ַ�������

//����һ�����ķ������������⣨����취Υ������Ŀ��˼�����Ǵ�����һ����ʱ������
int my_strlen(char* str)
{
	int count = 0;             //���Ұ�count����Ϊ������
	while(*str != '\0')
	{
		count++;
		str++;                 //�տ�ʼ��str��ʾstr[0]  ,��һ��ʾstr[1],          str��ʾw�ĵ�ַ��+1��ʾj�ĵ�ַ
	}
	return count;
}

//����һ�� �ݹ� �ķ�������������(�Ѵ��»�С)
int dg_strlen(char* str)
{
	if (*str != '\0')
		return 1 + dg_strlen(str + 1);  //�������⣬���Ρ���������
	else
		return 0;
	
}


int main3()
{
	char arr[] = "wj come on";

	printf("����ʱ����������ģ�%d\n", my_strlen(arr));
	printf("�õݹ�������ģ�%d\n", dg_strlen(arr));

	return 0;
}