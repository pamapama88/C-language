/*
��־
��1.0�汾�У�ֻ�����ù̶��Ĺػ����������ǳ������Ի���������������汾���ܹ��Զ���ػ�ʱ�䣬���������Ĺ��ܲ���

�������ݣ�
ͨ���������ֵ�λ���������Զ�����ת��Ϊstring��ʽ����ͨ�� .c_str() ������string����ת��Ϊ char* ������ shutdown ʹ��
�Ӷ�ʵ���˶�̬��ϵͳ����
����̬�����ػ�ʱ��

2.1��������
���������������ľ�ϸ���أ�ʹ�ùػ�ʱ����Ӿ�ȷ

*/





#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<iostream>

//�ڵ��������� cmd ��command��----������
//�򿪺�����  shutdown -s -t 60 ��ʾ�ػ������ùػ�������ʱ�䡢60���ػ���
// ����shutdown -a  ��ʾȡ���ػ���������������ɵ��ž͹ػ��ˡ�
//����������system��ִ��ϵͳ����                                                                                ��<stdlib.h>��
// 



int wei_shu(double a)           //����һ�������м�λ�ĺ���
{
	if (a == 0)
	{
		return 1;
	}
	int ws = 0;
	int b = a;
	while (b)
	{
		b /= 10;
		ws++;
	}
	return ws;

}



std::string turn_int_into_char(int a)              //��һ������ת��Ϊstring�ַ����ĺ���     ��  �����Ҫchar* �� ����Ҫ�� .c_str() ��������ת��
{
	int ws = wei_shu(a);
	int* one_num = new int[ws];
	std::string the_char{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < ws; i++)
	{
		the_char += ('0' + one_num[i]);
	}
	delete[ws] one_num;
	//std::cout << the_char << std::endl;
	return the_char;
}



int main()
{
	int shut_time_min = 0;
	int shut_time_s = 0;

	char input[20] = { 0 };
	std::string char_num{};

	int www_error = 6;
	while(www_error)
	{
		printf("������ػ�����ʱ,��λ������ ��> ");
		scanf("%d", &shut_time_min);

		printf("�����븽�ӹػ�����ʱ,��λ���� ��> ");
		scanf("%d", &shut_time_s);

		if (shut_time_min >= 0 && shut_time_s >= 0)
		{
			char_num = "shutdown -s -t " + turn_int_into_char(shut_time_min * 60 + shut_time_s);
			www_error = 0;
		}
	}

	system(char_num.c_str());

again:
	printf("i��ע����ĵ��Խ��� %d ���� %d ���ػ����������\"������\"��ȡ���ػ�\n", shut_time_min, shut_time_s);
	getchar();                        //��Ϊ�����scanf�в�����ַ��ᵼ������input�������ַ����Ӷ������жϡ�������ˡ�������Ҫ��һ���������������в�����ַ�
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

/*�������ݣ�
�����Զ���ػ�ʱ����

*/