#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

int main()
{
	int q = 0;
	//ȷ����ӡ����
	for (q = 1; q <= 9; q++)
	{
		int w = 0;
		//ȷ��ÿһ��
		for (w = 1; w <=q; w++)
		{
			printf(" %d*%d=%d", q, w, q * w);
		}
		printf("\n");        //ÿ��ӡ��һ�оͻ���

	}



	return 0;
}