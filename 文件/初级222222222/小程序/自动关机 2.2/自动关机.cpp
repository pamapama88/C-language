/*
��־
2.2 ��������
��2.1�汾�У�ֻ����������������������������������������һ������С�����������ƹػ�ʱ��Ĺ��ܣ��Ա�򻯲���
������������ֻ�ܰ���������������ֻ���޸����������ͣ�����֧��С���ˣ�����ֻ֧��һλС��
��Ϊ����ͨ��������ʮ�������ģ������С���ᱻ�Զ�����ת����Ĩ��

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



int wei_shu(double a)           //����һ���м�λ�ĺ���
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



std::string turn_int_into_char(float a)              //��һ������ת��Ϊstring�ַ����ĺ���     ��  �����Ҫchar* �� ����Ҫ�� .c_str() ��������ת��
{
	int tep_a = a;
	int ws = wei_shu(tep_a);
	int* one_num = new int[ws];
	std::string the_char{};
	std::string a_num{};
	for (int i = 0; i < ws; i++)
	{
		one_num[ws - i - 1] = tep_a % 10;
		tep_a /= 10;
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
	float shut_time = 0;
	char input[20] = { 0 };
	std::string char_num{};

	int www_error = 6;
	while(www_error)
	{
		printf("������ػ�����ʱ,��λ������(���С�������һλ) ��> ");
		scanf("%f", &shut_time);

		if (shut_time >= 0)
		{
			char_num = "shutdown -s -t " + turn_int_into_char(shut_time * 60);
			www_error = 0;
		}
	}

	int int_time = shut_time;

	system(char_num.c_str());

	int again = 6;
	while(again)
	{
		printf("i��ע����ĵ��Խ��� %d ���� %.0f ���ػ������������������ȡ���ػ�\n", int_time, (shut_time - int_time) * 60);
		getchar();                        //��Ϊ�����scanf�в�����ַ��ᵼ������input�������ַ����Ӷ������жϡ�������ˡ�������Ҫ��һ���������������в�����ַ�
		scanf("%s", &input);
		if (strcmp(input, "������") == 0) //strcmp������ר�űȽ������ַ����ģ���������ַ�����ͬ�������0            ��<sring.h>��
		{
			system("shutdown -a");
			again = 0;
		}
		else
		{
			printf("������ˣ���\n");
		}
	}
	return 0;
}

/*�������ݣ�
�����Զ���ػ�ʱ����
ͨ���������ֵ�λ���������Զ�����ת��Ϊstring��ʽ����ͨ�� .c_str() ������string����ת��Ϊ char* ������ shutdown ʹ��
�Ӷ�ʵ���˶�̬��ϵͳ����
����̬�����ػ�ʱ��

*/