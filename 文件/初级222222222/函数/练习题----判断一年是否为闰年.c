#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//������ǣ��������ĵı�����������100�ı���������ͽ���ͨ���꣬����400�ı������֮Ϊ��������




int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//���������ʱ������Ҫ��һ��Ҫ�ɾ����ɸ�����Ҫ�ߡ�


int main4()
{
	int year = 0;

	for (year = 1000; year <= 2050; year++)
	{
		//�ж�year�Ƿ�Ϊ������
		if(1==is_leap_year(year))
		{
			printf("%d  ",year);
		}

	}



	return 0;
}

