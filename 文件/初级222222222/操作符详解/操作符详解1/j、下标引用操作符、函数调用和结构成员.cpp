#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//  []       �±����ò�����
//  ()       �������ò�����
//   .       �ṹ��.��Ա
//  ->       �ṹ��ָ�������


struct student
{
	char name[20];
	int age;                 // ��ͼֽ
	char id[20];
};


int main10()
{

//  []   �±����ò�����
//       ��������һ�������� + һ������ֵ
	
	int arr[10];     // ��������   
	arr[9] = 10;     // ʵ���±����ò�����
	//  [ ] ��������������arr��9




//  ()   �������ò�����
//       ����һ����������������һ�����������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ�����



//ʹ�� struct student ������ʹ�����һ��ѧ������ s1 ,����ʼ��  ���Ƿ��ӣ�
	struct student s1 = { "����",20,"2022126666" };

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);        //�ṹ�����.��Ա��
	printf("%s\n", s1.id);

	struct student* ps = &s1;

	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);

//->->->->->->->->->->->- 
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);


	return 0;
}