#include<stdio.h>

int main()
{
	char hehe = 'CAO';
	printf("%c\n", hehe);//��ӡ�ַ���ʽ������

	int age = 20;
	printf(" % d\n", age);//��ӡ����ʮ��������

	short int age2 = 20;//��shaot int ����Ŀռ��С������ʢ��20�´����࣬��Ϊ��ʡ�ռ�ͺ���
	printf(" % d\n", age2);//��ӡ����ʮ��������

	long num = 100;
		printf("%d\n", num);
    
		float dain = 3.1f;
			printf("%f\n", dain);//�����������

			double pai = 3.14;
			printf("%lf\n", pai);//������%f ��lf��׼ȷ

	
			printf("%d\n", sizeof(char));
			printf("%d\n", sizeof(short));
			printf("%d\n", sizeof(int));
			printf("%d\n", sizeof(long));//C���Թ涨sizeof(long)�Ĵ�С>=sizeof(int)�Ĵ�С,����ƽ̨��ͬ�е���7�е���8�ֽ�
			printf("%d\n", sizeof(long long));
			printf("%d\n", sizeof(float));
			printf("%d\n", sizeof(double));
		


	return 0;
}