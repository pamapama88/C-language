#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

void bubble_sort(int arr[], int sz)      //���ֱ�Ӵ��δ����鱾����ô����Ϊ�˽�ʡ�ռ�ֻ�ᴫ��һ��������ȥ��
{
	//����ȷ��ð�����������
	int i = 0;

	for (i = 0; i < sz - 1; i++)    //sz-1��ʾ���������Ǽ���ð������
	{
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i; j++)   //sz-1-i ���ǰ�ǰ sz-1-i ��������һ��
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}


}




int main1()
{
	int arr[] = { 8,6,7,5,2,1,4,0,9,3 };
	// //
	//��arr��������ʹ���Ϊ����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);      //������������[]��������û��[]�����ǰѵ�ַ����ȥ��     ��������һ����Ԫ�ص�ַ

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

//�������̫��ʵ�ˣ�����Ч�ʺܵ�
//���ǿ����Ż�һ��