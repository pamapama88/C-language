#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main1()
{

//�����⺯��
	//IO����
	//�ַ�����������
	//�ַ���������
	//�ڴ��������
	//ʱ��/���ں���
	//��ѧ����
	//�����⺯��




//strcpy----------------string copy
	char arr1[] = "wangjie";
	char arr2[20] = "#############";      //����20�Ļ������ַ��������ܲ������е�BUG���� 
	strcpy(arr2, arr1);         //��arr1���ַ���������arr2��,ͬʱ��  \0  һ�𿽱���ȥ��copy��arr2�����wangjie\0#####  ,����Ϊ\0���ַ��������ı�־�����Ե�\0printf��ֹͣ��    

	printf("%s\n", arr1);




//memset--------------memory set  �ڴ�����
	char arr3[] = "holle,world";
	memset(arr3,'*',5);                //���ǰ�arr3����ַ��滻�� * ���ܹ��滻���
	printf("%s\n", arr3);

	memset(arr3, '#', 11);            //���Ҫ�滻���ַ����������С��Ҫ��Ļ����ͻ����һ��BUG������һ��Ҫ�úù�ע���������
	printf("%s\n", arr3);








	return 0;
}




