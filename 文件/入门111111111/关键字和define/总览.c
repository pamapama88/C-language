#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main0()
{
	//�Լ�����ı��������ܺ��κιؼ��ֳ�ͻ������
//  auto  break  case char const continue default do double else enum
//  extern float for goto if long register return short signed
//  sizeof static struct switch typeadef union unsigned viod volatile while 


	//auto  �Զ�
	int a = 10;//�ֲ��������Զ����������Զ��������Զ����٣�ǰ��ʡ����һ��auto (��Ϊ�ֲ����������Զ����������԰�auto ��ʡ����),�����ʡ�ԣ�������(�ðɲ���)
	//auto int b = 20; Ϊʲô������
	//��vs2010���У����ִ�����ʾ��"auto���������κ���������˵������ϣ���Ϊ�°�C++����auto���ܺ��κ����ͽ�����ϣ�
	//ֱ��д��auto b=2,�ͱ�ʾ��b�Զ�ת��������,��auto���ݺ����ֵ�Զ��Ѹñ���ת������Ӧ�����ͣ�
	//���߲���auto��ֱ��д��int b=2,ϵͳ���Զ�Ĭ��Ϊ�Զ�������

	auto b = 20;

	//const ������
	//defaut Ĭ��
    //du while ѭ��
	//enum ö��
	//extern �����ⲿ����
	//register �Ĵ����ؼ���   �����ڼĴ���������һ���ռ䣬�ܸ���ķ��ʣ�����������Ϊһ���������ֻ��ʮ�����Ĵ�����һ���Ĵ�����2kb.
	//����
	register int jj = 10;   //���jjҪ���ϱ�ʹ�ã�register�����ִ���ٶ�,


	//int ����ı������з��ŵ�
	//��ʽ��д�� signed int ��ʾ�з��ŵ�����
	//���� unsigned ��ʾû�з��ŵ����ͣ�����û�з���λ��д��ɶ����������

	//struct �ṹ��ؼ���
	//viod �� ��
	//typedef ���Ͷ���
	//static   �޸����������������
	// extern  �����ⲿ����
	//define  (define����һ���ؼ�������һ��ָ��)���峣���ͺ�
	//



	


	//
	//
	//


	return 0;
}