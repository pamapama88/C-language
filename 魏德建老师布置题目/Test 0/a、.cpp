#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int i = 5;
	//printf("%d\n",(i++));        //�����5
	printf("%d\n", (++i) + (++i) + (i++));           //����� 6+7+8=21         ����ÿһ���ܽ���Ϊɶ�ģ�˵��������δ������Ϊ��undefined Behaviour��
	printf("%d\n", i);
	int j = 7;
	printf("%d\n", 13 + (j++));        //����� 20

	int a = 5;
	printf("�߸ߣ���%d  %d\n", a++, a++);     //�α�˵ VC��������   5   5  ��20�����Ŀα���


	return 0;
}