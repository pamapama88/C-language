#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct - �ṹ��ؼ���    stu - �ṹ���ǩ    struct stu--�ṹ������    
struct stu
{
	//��Ա����                        ���ṹ���Ա������ ���������飬�����������ṹ�塣
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;     //��������ȫ�ֵĽṹ�����




//�ṹ���������
typedef struct BBC         //typedef ��    ��С�������ã�������֮��ԭ�������ֻ�������
{
	char job[20];
	int money;
}BBC;

//�Ӵ�����ṹ��ȿ��Խ��� struct BBC ���ֽ��� BBC


//���������ṹ��Ľṹ��
struct s
{
	int a;
	char b;
	char ch[10];
	double c;
};

struct big
{
	char en[20];
	struct s ss1;     //������Ҳ�Ǵ�����һ���ṹ�����
	char* pc;
};


int main1()
{
	struct stu s4;   //���ǽṹ�壨struct stu�����������Ĺ���

	struct BBC s5;
	BBC s6;          //���С����ԭ��������ͬ��Ч��

//�ṹ������ĳ�ʼ��
	struct stu s7 = { "����",18,"15605438760" ,"Ů" };  


//Ƕ�׽ṹ��ĳ�ʼ��
	char arr[] = "SBNB";
	struct big t = { "hehe",{2,'5',"0",0.250},arr};         //�Ի��ʮ���ӣ����ַ�Ҫ��'������'���ַ���Ҫ��"˫����"  ,����ǿ�� '5' 


	printf("%s\n", t.ss1.ch);  // ��ӡ 0
	printf("%s\n", t.pc);      //��ӡ SBNB
	printf("%c\n", t.ss1.b);      //��ӡ SBNB
	printf("%d %c %s %f\n", t.ss1.a, t.ss1.b, t.ss1.ch, t.ss1.c);      //�Ժ���ʮ���ӣ����ַ�Ҫ�� c ,�ַ���Ҫ�� s

	return 0;
}