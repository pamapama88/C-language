#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h> 
#include<string.h>
//���Ӷ��󡤽ṹ�塤�����Լ��������������

//����һ���ṹ������
struct book
{
	char name[20];
	short price;

};                    //ע��ֺŲ���ȱ��

int main()
{
	struct book A1 = { "һǧ��һ��Ϊʲô",19.9 };

	printf("������%s\n",A1.name );
	printf("��Ǯ��%d\n", A1.price);

	A1.price = 29;
	printf("˫ʮһ�ؼۣ�%d\n", A1.price);
	
	
	//��֮��Ӧ��ָ�������� struct book*
	struct book* dizhi = &A1;
	printf("%s\n", (*dizhi).name);
	printf("%d\n", (*dizhi).price);

//    . ��һ��������������ָ���ṹ���Ա
//    .   �÷�  ���������.��Ա

	//��֮�������ƵĻ���   ��>

	printf("%d\n", dizhi->price);

//  ->��һ������������������������
//�÷�  �ṹ�����->��Ա

//��  ��ΪC����û���ַ������������Ը��������Ҫ��strcpy����,����sring.h�Ҫ����ͷ�ļ�

	strcpy(A1.name, "����������");
	printf("������%s\n", A1.name);
	printf("%s\n", (*dizhi).name);

	//strcpy-string-�ַ���������string.h��


	return 0;
}