#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>                  

// 22��ҽһ�� ���� 2022121144


// �������д�8�����ĺ� 

int weishu(int a)                   //���ڼ���ĳ�����м�λ�ĺ���
{
	int n = 0;
	while (a > 0)
	{
		a /= 10;
		n++;
	}
	return n;
}
int ADD_NUM_8(int sta, int end)       //���ڰ������8�����������ĺ���
{
	int tep;
	int retu = 0;
	for (sta; sta <= end; sta++)
	{
		int WS = weishu(sta);
		for (WS; WS > 0; WS--)
		{
			tep = sta % 10;
			if (8 == tep)
			{
				retu = sta + retu;
			}
		}
	}
	return retu;
}



int main1()
{
	int result = ADD_NUM_8(1, 2000);
	printf("������Χ�����д�8������֮��Ϊ ��%d\n", result);

	return 0;
}