#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>


int main()
{
	int age = 1;
	scanf("%d", &age);
//  һ
	if (age < 18)
		printf("δ����\n");
	else if (age >= 120 && age < 9999)
		printf("������\n");
	else if (age >= 9999)
		printf("��ˮ������\n");
	else
		printf("����\n");
//��
	if (age < 18)
		printf("δ����\n");
	else
	{
		if (age >= 120 && age < 9999)
			printf("������\n");
		else if (age >= 9999)
			printf("��ˮ������\n");
		else
			printf("����\n");
	}
//��
	if (age < 18)
	{                              //�����
		printf("δ����\n");
		printf("����̸����");
		printf("���ܴ���Ϸ");
	}
	else if (age >= 120 && age < 9999)
		printf("������\n");
	else if (age >= 9999)
		printf("��ˮ������\n");
	else
		printf("����\n");


//��pythonһ����C���Ե�if�����ѭ�ͽ�ԭ��
	int a = 0;
	int b = 2;

	//һ
	if (a == 1)
		if (b == 2)
			printf("������\n");
	else
		printf("û����");

		//��
		if (a == 1)
			if (b == 2)
				printf("������\n");
			else
				printf("û����");

			       //���ǵ�Ч����һ��һ���ģ���Ϊ�ͽ�ԭ�����Դ�һ��ʼ��û��ȥ����ɶ����ӡ������

		//����
		if (a == 1)
		{
			if (b == 2)
				printf("������\n");
		}
			else
				printf("û����");




//if������д��ʽ
//// 
//	//����
//		if(a==0){
//			return 66;
//		}
//		return 55;         //������˼��ʵҲ�� ����ǣ���ô66������������ǣ���ô55.�������������ױ���⣨�������������
//
//
//	//Ư����д��
//		if(a==0)
//		{
//			return 66;
//		}
//		else
//		{
//			return 55;
//		}
//
//
//
//
		int num = 4;

    //����
		if (num=5)                                   //һ���Ⱥţ�������û�������ͳ���һ�������ҵ�BUG
		{
			printf("�ٺ٣������ǵ���5\n");
		}

	//�õ�д��
		if (5 == num)
		{
			printf("hehe\n");                     //��ʱ������Ⱥž�Ҫ�����ˣ���������ˣ�����ʽ����
		}








	return 0;
}