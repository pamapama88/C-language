#include<stdio.h>

int i = 20;//ȫ�ֱ���--�����ڴ���飨{}��֮��ı���

int main1()

{
//C�����﷨�涨������Ҫ�����ڵ�ǰ�����ǰ��
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	{
		int i = 50;//�ֲ�����--�����ڴ�����ڲ�,������ʱ���Ⱦֲ�����,���鲻Ҫ��ͬ������ᣬ����bug

		printf("%d", i);

	}

//��������

	//���뺯��
	scanf("%d%d", &num1,&num2);//ȡ��ַ����&
	sum = num1 + num2;
	printf("sum=%d\n",sum);



	return 0;

}