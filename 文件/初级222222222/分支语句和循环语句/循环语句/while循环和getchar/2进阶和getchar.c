#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 

int main2()
{



	int En = getchar();

	putchar(En);   //��printf��%c��һ����
	printf("\n%c\n", En);


	int ch = 0;

	while ((ch = getchar())!= EOF);    //end of file �ļ���β,����ֵ��-1       ctrl+z���ɵõ�һ��EOF
	{
		putchar(ch);        
	}



	return 0;
}