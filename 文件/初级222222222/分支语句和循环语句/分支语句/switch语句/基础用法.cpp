#define _CRT_SECURE_NO_DEPRECATE 
#include<stdio.h>
#include<string.h>



int main1()
{
	int day = 0;
	scanf("%d", &day);

	if (1 == day)
		printf("��һ\n");
	else if (2 == day)
		printf("�ܶ�\n");		

	//�������һֱд�����죬Ҫ���ϱ��Ӿ���������switch.


//switch���Ҳ��һ�ַ�֧��䣬�������ڶ��֧�����
		switch (day)					//switch���ʽ�������ֵһ�������Ͳ��У���Ȼ�ᱨ��
		{
		case 1:                         //case  ���ͳ������ʽ;
			printf("��һ\n");          //     ���;
			break;
		case 1+1:
			printf("�ܶ�\n");
			break;
		case 1+2:
			printf("����\n");
			break;
		case 4:
			if (4 == day)
			    printf("����\n");
			break;
		case 5:
			printf("����\n");
			break;
		case 6:
			printf("����\n");
			break;
		case 7:
			printf("����\n");
			break;//��ϰ�ߣ�ĩβҲ��break,δ����д���ü�
		default:               //�������ķ�֧��û�ܽ���ȥ������default
			printf("��������\n");

		}


		switch (day)
		{
		default:                  //û�з���˳�򣬽�����ڽ�β��
			printf("��������\n");

			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf("������");
				break;
			case 6:
			case 7:
				printf("��Ϣ��");
				break;//��ϰ�ߣ�ĩβҲ��break
		}




	return 0;
}
