#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

int main() {

	int a = 616;
	int b = 626;
	int c = 636;
	int* arr[3] = { &a,&b,&c };

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *arr[i]);  //��ʦд�İ� arr[i] ���������� �� *(arr[i])

	}

	return 0;
}