#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>


int main2()
{
	int arr[10] = { 0 };
	int* p = arr;      //arr :��Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++) {

		*(p + i) = 1;
	}
	//���ϴ����ʾ��arr���ʮ��Ԫ�ظĳ� 1  �����Լ���һ�¿���

	char* pc = arr;
	for (i = 0; i < 10; i++) {

		*(pc + i) = 1;
	}
	//char����д�Ͳ����ˣ���Ϊ��ֻ�������ʮ���ֽڣ��������ǵ�����������ʮ���ֽڣ�������ֻ�ܸ�����Ԫ��



	return 0;
}