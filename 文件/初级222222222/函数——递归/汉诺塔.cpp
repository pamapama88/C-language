#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>


int hann(int n)
{
	int ZZA[64] = { 0 };          //��Ϊ�һ�����Ū��̬���飬û���ñ���N��������Ĵ�С������ֻ���ø�64���ֲ���㣬�����������ֻ����64�����µĸ����ĺ�ŵ��
	for (int M = n; M >= 0; M--)
	{
		ZZA[M] = M;
	}

	int ZZB[64] = {};
	int ZZC[64] = {};


}


int main()
{
	int N = 1;
	scanf("%d", &N);
	
	int bushu = hann(N);





	return 0;
}