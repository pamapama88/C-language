#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#define WJ 666
//�Ӵ�WJ�����������ж���666,,define����ı�ʶ������
enum day
{
	one,
	tow,
	there,
	foul,
	five,
	six,
	seven,
};


int main()
{
//const-�����ԣ����κ�Ķ����Ǳ����������г����ԣ����Գ�Ϊ������
//��const int i=20;    �Ӵ�i���ٱ�

printf("%d\n",WJ);

//ö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

printf("%d\n", MALE);//0  Ĭ���Ҳ��ܸ� 
printf("%d\n", FEMALE);//1
printf("%d\n", SECRET);//2
{
	enum day DAY = six;
}   




return 0;
}