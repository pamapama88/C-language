#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h> 

int main()
{
	char mima[20] = { 0 };
	int huida = 0;
	int ch = 0;

	printf("����������>>>");
	scanf("%s", mima);
	while ((ch = getchar())!='\n')        //��Ϊ����������123456\n,����123456 ASFgfasg\n,,���������Ҫ����һ���س������Ե�while ��⵽�˻س�������һ��
	{
		;
	}
		printf("��ȷ�ϣ�Y/N��>>>");
		huida = getchar();

		if (huida  == 'Y') 
		{
			printf("ȷ�ϳɹ�");
		}
		else
		{
			printf("����ȷ��");
		}


		int Z = 0;
		while ((Z = getchar() )!= EOF)    //�����������������������ͨ��ctrl+z���������У���Ȼ��Զ��������
		{
			if(Z<'0'||Z>'9')       //   || ����˼�ǻ��ߡ�����������˼�������������ַ���ASCII����е�λ����0֮ǰ��9֮�󣨼���������0~9�����������ͻ��ͷ����ѭ����
				continue;
			putchar(Z);
		}



	return 0;
}
