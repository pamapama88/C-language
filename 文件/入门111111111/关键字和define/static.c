#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
  


//
//
//
//
//                 �ֲ�����     ʹ���������ڱ䳤����Ϊһ����̬�ľֲ�������������ȫ�ֱ��������ڴ������ⲻ��
//
//static   ����    ȫ�ֱ���
//
//                  ���� 
//


extern void test();
extern void test_success();

int main4()
{
	 int i = 0;
	 int sta = 0;
	

	while (i < 5)
	{
		
		test();
		i++;

	}

	//������static�ĺ���test_success

	while (sta < 5)
	{

		test_success();
		sta++;

	}


	return 0;
}