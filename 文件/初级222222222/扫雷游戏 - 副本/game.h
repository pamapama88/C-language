#define _CRT_SECURE_NO_DEPRECATE 1
#define ROW 9
#define COL 9
#define ROWS ROW+2   //���ԭ����������������
#define COLS COL+2   //Ϊ�˱�Եͳ���׵ĸ���������

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define EASY_COUNT 10
#define HAED_COUNT 15

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROW][COL], int row, int col);

//������ʦ�Ĵ���������һ��ɨ������������¼���ܣ�
//       1���������̲�������
//       2�����ж��Ƿ�ɨ�����ף��Լ���Ӯ���жϷ����������Ѿ�̽���˶��ٿ������ж�ʣ�µ�������
//         ��Ҫ����̽��----��ÿɨһ���׼�һ��������������հ����׵ĸ������ʱ�ж�ʤ����
//       3������ʾָʾ�ĵ���Χ�׵ĸ���
// 
// 
//�����ɨ���У����ֶ�������������Ż���
//
// 1�������˵�һ�ε�����ᱻը���Ĺ���
// 2����������Χû����ʱ�Զ�չ���������Ĺ��ܣ��ݹ飩
// 3���Ż�����Ӯ���жϷ���������δ̽���������ж��٣���δ̽������������׵ĸ���
//    ʱ���ж�ʤ����
// 
// 
// 
//�Ҿ��û�Ӧ�����ӵĹ����У�
// 
//1����ʱϵͳ
//2��ͳ�Ƽ�����Ϸ����óɼ�ʱ��
//3����ݵĸı��ѶȺ����̴�С�Ĺ���
//*****************************************
// ****************************************
// 
//����Ժ����Easy_X����ͼ�εĻ����ῼ�Ǽ������Ϲ���