#define _CRT_SECURE_NO_DEPRECATE 1

#include<stdio.h>
#include<string.h>

int main()
{

	//3����һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v0, int n);���ܣ���v[O]	<= v[1] <= v[2] <= .... <= v[n - 1]�������в���x.
	 //дһ�����룬�����飨����ģ����ҵ�һ��ĳ������


	//���Ǹղŵ����⣬���۰��㷨��n����������ĳ������ֻ��Ҫ��log�Զ�Ϊ��n�Ķ���log n
	//                                                                            2
	
	int manghe[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int gui = 13;                                     //���ǵ�������Ǵ����ʮ�������ҵ�13
	//�Ӵ���Ѷ�
	scanf("%d", &gui);
	if(gui>20)
	{
		gui = 11;
		printf("��������ѷ���Ĭ��ֵ11\n");
	}

	int geshu = sizeof(manghe) / sizeof(manghe[0]);   //�����������ܹ��м���Ԫ��
	int left = 0;                                    //�����Ԫ�ص��±�
	int right = geshu - 1;                           //���ұ�Ԫ�ص��±�
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (manghe[mid] > gui)
		{
			right = mid - 1;
		}
		else if (manghe[mid] < gui)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d", mid);
			break;
		}
	}
	return 0;
}
//֮ǰ���μǵıʼ����˱����ˣ������ƾ������ģ��е���