#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>

//ָ�� + - ����
//ָ�� - ָ��
//ָ��Ĺ�ϵ����

int my_strlen(char* str)
{
	char* start = str;    //ʹ start ��ʾ��Ԫ�صĵ�ַ
	char* end = str;      //��취ʹ end ��ʾ��\0���ĵ�ַ
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}





int main4()
{
	//1��ָ��+-����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 1;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p++;
	}

	p = arr;
	for (i = 0; i < sz / 2; i++)
	{
		printf("%d\n", *p);
		p += 2;
	}


	p = &arr[9];                    //һ��Ҫ�ǵ� & ȡ��ַ���� ��arr ʱ��ַ��������[]�ʹ���Ԫ����
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p -= 1;
	}


	for (int* vp = &arr[0]; vp < &arr[9];)      //ע�����д������  ָ��Ĺ�ϵ����
	{
		*vp += 1;                              //�����������ʼ��Ϊ 0 ��
		vp++;

	}



//ָ�� - ָ��
	int arrr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("\n\n\nָ��֮���Ԫ�ظ���Ϊ��%d\n", &arrr[9] - &arrr[0]);      //ָ�� - ָ�룺�õ�����ָ��֮���Ԫ�ظ���,���������Ǹ�������Ҫȡ����ֵ


	//֮ǰд���������ַ������ȵķ������ֱ��� �������� �� �ݹ鷨����������������ݹ顶��ϰ2������
	//������дһ�ַ���
	char text_arr[] = "bite your ear";   
	int len = my_strlen(text_arr);
	printf("���������Ԫ�ظ���Ϊ��%d\n", len);


//ָ��Ĺ�ϵ����
	//���Ǻ����ָ���ǰ���ָ���

	//C���Ա�׼�涨
	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ����ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϣ���Ȼ��û��ʲô���£�
	float values[5];
	for (float* vp = &values[5]; vp > &values;)        //���ݱ�׼�涨��������д�� vp >= &values
	{
		*--vp;
	}
	

	return 0;
}