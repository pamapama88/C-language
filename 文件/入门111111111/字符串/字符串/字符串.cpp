#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcd";//���ַ����ŵ����������﷨����֧�ֵ�,,,,,�������a��b��c��d��\0���ַ����Ľ�����־��

	char arr2[] = { 'a','b','c',0 };//Ҳ���Է�\0(��׼�ľ���\0)
	//ÿһ���ַ����ж�Ӧֵ����	ASCII�������a��ASCII��ֵ��97,A��65......\0��ֵ��0��
	printf("%s\n", arr1);//�ַ�������Ҫ��s
	printf("%s\n", arr2);


	char arr3[] = "abc";
	char arr4[] = { 'a','b','c' };
	printf("%d\n", strlen(arr3));//strlen��ͳ���ַ������ȵĺ������ӿ�ʼһֱ����\0�����ж���λ(������\0)
	printf("%d\n", strlen(arr4));
	return 0;
}