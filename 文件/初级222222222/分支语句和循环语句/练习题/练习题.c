#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h> 
#include<windows.h>
#include<stdlib.h>

int main1()
{
	//1������n�Ľ׳�(n!)               1.52.14

	int n = 0;
	scanf("%d", &n);
	int KU = 1;
	for (n = n; n != 0; KU = KU * n, n--)
	{

	}

	printf("n�Ľ׳���%d\n", KU);

	//����ʮ�������Ӱɣ��������Ժ����ģ���֪���Լ�զ����
		/////////////////�������д����һģһ����һ�㲻��ĵģ����ǰ�  KU =KU*n  ����������Ĵ������



	//���㣨1!+2!+3!+......+n!)
	int N = 1;
	scanf("%d", &N);
	int meixiang = 1;
	int dange = 1;
	int zonghe = 0;
	for (meixiang; meixiang <= N; meixiang++)
	{
		dange = meixiang * dange;
		zonghe += dange;
	}
	printf("�׳�֮��Ϊ%d\n", zonghe);

	//66666,�о������¶��������Ǻ�ʱ����һ���̶��ˣ��о���forѭ�����˲����˽⡣�пն��Լ��༸������Ǻ��а�����(�����ǶԽ׳����˸������⣬���������)
//////////////////////����ĵĽⷨ������ʾ��Ŀ��ֻ���㵽10�������ҵĺá�
	/*
	int i = 0; 
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
	    //����͵���
	    sum = sum + ret;
	}
		printf("sum = %d\n", sum);
	*/

	//���ǸĽ���Ĵ���д��
	/*
	int main()
	{
		int i = 0; 
		int n = 0; 
		int ret = 1; 
		int sum = 0;
		for (n = 1; n <= 10; n++)
		{
			ret = ret * n;
			//����͵���
			sum = sum + ret;
		}
			printf("sum = %d\n", sum);
		return 0;
	}
	*/





//                        ����ϰ��ֱ��д�𰸣���Ϊ��������Ŀ
//3����һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v0, int n);���ܣ���v[O]	<= v[1] <= v[2] <= .... <= v[n - 1]�������в���x.
	 //дһ�����룬�����飨����ģ����ҵ�һ��ĳ������
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);
	//�Ǿ���k��
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±���%d\n",i);
			break;                             //�������ҵ�������ȥ������������ȥ��i �ͻ�һֱ��1��ֱ���ӵ���szһ����ͽ���ȥѭ����
		}
	}

	if (i == sz)
	{
		printf("�Ҳ���\n");
	}






//4����д���룬��ʾ����ַ��������ƶ������м��ۡ�

	char zifu1[] = "welcome to SZY!!!!";
	char zifu2[] = "##################";
	int left0 = 0;
	int right0 = sizeof(zifu1)-2;         //��ĸ������и� \0  ����sizeof��������С�����ټ������ܵ������ұߵ����ǵڼ���������һ�Ļ�ֻ�ܴ������ұ���������
	                                      //�����������迼��\0�����⣬���ַ������ַ�����Ҫ����\0�ˣ��������Ծ���strlen���ַ����������ĸ���
	right0 = strlen(zifu1)-1;           //�������ַ�������(Ԫ�ظ���)�ģ�����\0��ͣ�ˣ����Բ��ÿ���\0

	while (left0 <= right0)
	{
		zifu2[left0] = zifu1[left0];              //�õ�һ���������Ԫ�ؽ��뵽�ڶ����������Ӧλ��
		zifu2[right0] = zifu1[right0];
		printf("%s\n",zifu2);
		//Ϊ��������̬չʾ����������ÿ��ӡһ��ͣ��һ��
		Sleep(1000);        //��<windows.h>�ʵ���ϲ�����Ҳ���ã�����λ��ms
		//
		//���ǲ�����̬���������°�
		system("cls");       //system��ִ��ϵͳ�����һ��������---cls���ʾ�����Ļ  ����<stdlib.h>��
		

		left0++;
		right0--;
	}

	printf("%s\n", zifu2);



//5����д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳����򣩡�
		
	int gongjvshu = 0;
	char password[20] = {0};
	
	for (gongjvshu = 0; gongjvshu <= 5; gongjvshu++)
	{
		printf("���������롷");
		scanf("%s", password);           //ע�⣬���ﲻ��ȡ��ַ��Ŷ��
		if (strcmp(password, "301251") == 0)          //�ȺŲ��������Ƚ������ַ����Ƿ���ȡ�Ӧ����һ���⺯��---strcmp .��������Ⱦͷ���0       .������<string.h> ��
		{                                             //��strcmp��,ǰ��Ĵ��ں���ľͷ���һ���������������֮�򷴡���Ⱦͷ���0
			printf("\n��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}


	if (gongjvshu == 5)
		printf("����������������˳�����\n");


	return 0;
}