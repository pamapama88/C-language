#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>


typedef struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;   

void STRUCT_print1(stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age :%d\n", tmp.age);
	printf("Tele:%s\n", tmp.tele);
	printf("Sex :%s\n", tmp.sex);
}

void STRUCT_print2(stu* ps) {

	printf("name:%s\n", ps->name);
	printf("age :%d\n", ps->age);
	printf("Tele:%s\n", ps->tele);
	printf("Sex :%s\n", ps->sex);
}


int main()
{
	stu s = { "����",40,"18860527968","��"};

	STRUCT_print1(s);

	printf("\n\n\n\n");

	STRUCT_print2(&s);       //��Ϊ������ô����µĽṹ��(���ÿ����µĿռ�)����������ã�Ч�ʸ����ʿ졣
	                         //һ��ָ���ռ��4���ֽڣ�64λƽ̨��
							
	//�ܽ᣺�������ε�ʱ�򣬲�����Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
	                              //ѹջ��
	//���� �� �ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ

	//ջ������������̬��

	/*ջ��
	       �ֲ�����
		   ��������ʽ����
		   ��������Ҳ���ٿռ�
	  ����
	       ��̬�ڴ����
		   malloc/free
		   realloc
		   calloc 
	  ��̬��
	       ȫ�ֱ���
		   ��̬����
		   */


	/*���ݽṹ
	          �������ݽṹ
			               ˳���        �������һ����
						   ����          ��ɢ�ҵ�������ϵ����
						   ջ            ��һ�����ݴ洢��ջ�Ĳ���������ѹջ����ջ���ص����Ͻ��ϳ���
						                 ����ÿ��һ������ջ�����Ǳ仯�ģ���Ҫɾ��һ�����ݣ���ջ����Ҫ��ջ���Ͽ�ʼɾ��  �Ƚ��ĺ����������ȳ��������������ݽṹ��
						   ����
			  �������ݽṹ
			               ������
			  ͼ
			
	*/                                  // �����������ؼ���  <����ջ֡�Ĵ���������>

//�������


	return 0;
}