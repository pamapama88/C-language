#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {

	int a = 616;
	int b = 626;
	int c = 636;
	int* arr[3] = { &a,&b,&c };

	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *arr[i]);  //��ʦд�İ� arr[i] ���������� �� *(arr[i])
	}


	//ʵ��
	int array[2][11] = {0,1,2,3,4,5,6,7,8,9,10};
	int* p_array[5] = {0};
	cout << array[0][5] << endl;

	p_array[0] = &array[0][0];
	cout << *p_array[0] << endl;


	for(int i=0;i<11;i++)
	{
		p_array[0]++;
		cout << *p_array[0] << endl;        //������� ++ ʹ���������p_array[0]��ָ��ָ����array[0][0]����һ��Ԫ�أ���array[0][1].����p_array[0]�е�0���±꣩����ı�
	}




	return 0;
}