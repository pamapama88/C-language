#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
 
//���ַ�����
//�Ҳ�������-250
                                             //�βκ�ʵ����ͬһ��k��ʾ�ǿ��Եģ��﷨�Ϻ�֧��
int binary_rearch(int arr[],int k,int sz)  //�����Ǹ���Ժܴ�Ķ���������ռ�úܴ�Ŀռ䣬���������ڴ��ε�ʱ�򣬴��ݹ����ĵ���������Ԫ�صĵ�ַ
{                                            //arr�����ﱾ������һ��ָ�룬win32ϵͳָ����Ǵ�С����4������ֻ���ں������������ٴ�����
	int left = 0;
	int right = sz - 1;
	if (k > sz)
	{
		return - 250;
	}
	while(left<=right)                    //ǧ��ǵ��������Ⱥ�
	{
		int mid = (left + right) / 2;    //�м�Ԫ�ص��±�;ע������ѭ������
	
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if(arr[mid]>k)
		{
			right =mid - 1;
		
		}
		else //if(arr[mid]=k)
		{
			return mid;
		}
		
	}
	return -250;
}

int main5()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int k = 4;

	int sz = sizeof(arr) / sizeof(arr[0]);

	scanf("%d", &k);
	int ret = binary_rearch(arr, k,sz);
	if (-250==ret)
	{
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}

	return 0;
}