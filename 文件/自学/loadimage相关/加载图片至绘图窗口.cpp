#define _CRT_SECURE_NO_DEPRECATE 1

#include <graphics.h>
#include <conio.h>

// ������
int main()
{
	// ��ͼ���ڳ�ʼ��
	initgraph(1080, 1000);

	// ��ȡͼƬ����ͼ����
	loadimage(NULL, _T("C:\\wj\\22.jpg"));

	// ��������˳�
	_getch();
	closegraph();
}

//C:\\wj\ganyu.jpg