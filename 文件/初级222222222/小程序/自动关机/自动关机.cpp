#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ڵ��������� cmd ��command��----������
//�򿪺�����  shutdown -s -t 60 ��ʾ�ػ������ùػ�������ʱ�䡢60���ػ���
// ����shutdown -a  ��ʾȡ���ػ���������������ɵ��ž͹ػ��ˡ�
//����������system��ִ��ϵͳ����                                                                                ��<stdlib.h>��
// 


int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 180");
again:
	printf("i��ע����ĵ��Խ���3���Ӻ�ػ������������������ȡ���ػ�\n");

	scanf("%s", &input);
	if (strcmp(input, "������") == 0) //strcmp������ר�űȽ������ַ����ģ���������ַ�����ͬ�������0            ��<sring.h>��
	{
		system("shutdown -a");
	}
	else
	{
		printf("������ˣ���\n");
		goto again;
	}
	return 0;
}
//������ļ���Ӧ��Debug�ļ������ҵ���Ӧ�� �Զ��ػ�.exe �ļ���Ȼ��ٶ�����������ӵ�  ���� �Ȼ���Ҽ����ԣ����������͸�Ϊ�Զ���
//��ô���Ծͻ��ڿ���2����֮��ػ���