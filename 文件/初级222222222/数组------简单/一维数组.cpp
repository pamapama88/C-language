#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

int main() {

	//����һ���������� []   �±����ò�����
		//����ʵ����������ʵĲ�����


//1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
	char arr1[] = "abcdef";  //[a][b][c][d][e][f][\0]
	printf("%c\n", arr1[3]);

	int i = 0;
	for (i = 0; i < (int)strlen(arr1); i++)
	{
		printf("%c  ", arr1[i]);
	}

	printf("\n");


	for (i = 0; i < (int)strlen(arr1); i++)
	{
		printf("&arr1[%d]=:%p\n", i, &arr1[i]);             //%p   ��pointer
	}


	printf("\n\n");

//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222


	int arr3[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr3) / sizeof(arr3[0]);
	
	for (i = 0; i < sz; i++)
	{
		printf("&arr3[%d]=:%p\n", i, &arr3[i]);        //16���ƣ�0123456789ABCDEF      ������������Ԫ��֮���4�����͵Ĵ�С����4������һά�������ڴ�����������ŵ�     
		//����һά�������ڴ�����������ŵ�
	}


	//int one_num[] = { 0 };
	//for (int i = 0; i < 10; i++)
	//{

	//	one_num[i] = i;                                 //�˹��̵���Ұָ�룬����ɶ�ջ��
	//	printf("one_num[%d] = %d\n", i, one_num[i]);
	//}


	int ws = 10;
	int* one_num = new int[ws];
	for (int i = 0; i < ws; i++)
	{

		one_num[i] = 996;                               
		printf("one_num[%d] = %d\n", i, one_num[i]);
	}
	delete[ws] one_num;



	return 0;
}
