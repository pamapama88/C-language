#define _CRT_SECURE_NO_DEPRECATE 1



#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
#include <conio.h>
int main111() {
	//// ��ͼ���ڳ�ʼ��
	initgraph(4000,4000);	// ������ͼ���ڣ���СΪ 4000x4000 ����

	//��ͼ������
	//1.����һ��IMAGE���͵ı��� ȥ�洢ͼƬ
	//�ͺͶ���һ�����ͱ���һ��
	//int a;
	//a=1;
	IMAGE mm;
	//2.����ͼƬ:ͨ��·������
	loadimage(NULL, _T("C:\\wj\ganyu.jpg"));
	loadimage(&mm, "C:\\wj\ganyu.jpg", 4000, 2900);//w:ͼƬ�Ŀ�h:ͼƬ�ĸ�
	//3.��ʾͼƬ
	putimage

	//��������˳�
	_getch();
	closegraph();



	return 0;
}

//��������������������������������
//��Ȩ����������ΪCSDN������Ī���Ρ���ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https ://blog.csdn.net/qq_66954747/article/details/124106889