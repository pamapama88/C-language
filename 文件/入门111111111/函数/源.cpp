#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>


int add(int x, int y)//�����Ķ��巽��������add�Ǻ���������int�Ǻ����ķ�������
{
	int z = x + y;        // ���Ǻ�����
	return z;
}

int main()
{
	int sum = 0;
	int shu1 = 0;
	int shu2 = 0;
	printf("����һ��������ӷ��ļ����,������������\n");
	scanf("%d%d",&shu1,&shu2);
	sum = add(shu1, shu2);
	printf("sum=%d",sum);

	return 0;
}