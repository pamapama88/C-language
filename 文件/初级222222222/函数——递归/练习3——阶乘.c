#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>

//����дһ���׳˵ĳ���

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;      //����ǳ�����ţ�ƣ�ֱ�Ӱ���
	}
	return ret;
}

int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}




int main4()
{
	int nn = 0;
	int ret = 0;
	scanf("%d", &nn);

	ret = Fac1(nn);
	printf("��ѭ���ķ�ʽ��������%d\n", ret);

	ret = Fac2(nn);
	printf("�õݹ�ķ���%d\n", ret);

	return 0;
}