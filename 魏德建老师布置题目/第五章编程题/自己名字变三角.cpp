#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>

//���Լ������ִ�ӡ������  

                            //22��ҽ ���� 2022121144

#define ROW 8
void name_triangle(char name[])
{
	int len = strlen(name);
	if (0 == len % 2)
	{
		for (int i = 1; i < ROW; i++)
		{
			for (int n = ROW - i; n > 1; n--)
			{
				printf(" ");
			}
			for (int j = 1; j <= i; j++)
			{
				printf("%c", name);
			}
			printf("\n");
		}
	}

}

int main2()
{
	char name[] = "����";
	name_triangle(name);

	return 0;
}