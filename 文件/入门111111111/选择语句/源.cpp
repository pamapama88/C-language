#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main()
{
//������if����չʾ��
	int i = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1��0��\n");

	scanf("%d", &i);//ע���������ʱ��д\n��Ҳ���Զ����У����д��\n�Ǿ��п��ܳ���bug

	if (i == 1)
		printf("�üһ��е�\n");
	else
		printf("�����϶�\n");




//���潫��whileѭ����չʾ
	int line = 0;

	printf("��������һ����˿\n");
	printf("Ȼ���㽫ͨ���ô������ı��������\n");

	while (line < 20000)
	{
		printf("������%d",line);
		printf("�д���\n");
		line++;
	}
	if (line>=20000)
		printf("good job,knowledge chang your life!");




	
	return 0;

}