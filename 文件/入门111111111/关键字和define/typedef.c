#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include <string.h>


//����typedef���Լ����ؼ�����С��
int main2()
{
	typedef unsigned int zhengshu;
	//�Ӵ� δ�� unsiged int ������дΪ zhengshu
	//��
	unsigned int type1 = -20;
	//��
	zhengshu type2 = -32;
	//��һģһ����
	printf("type1=%d\n", type1);
	printf("type2=%d\n", type2);




	return 0;
}
//��Ϊʵ�ڲ��������Դ�ļ����룬���ԾͿ�������������ȥ��

