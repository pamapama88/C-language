#define _CRT_SECURE_NO_DEPRECATE 1
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	int i{};
	int j{};
	string str;
	string obj;
	getline(cin,str);
	obj = str;
	while (str[i++] != '\0');
	for (i -= 2; i >= 0; i--)
	{
		obj[j++] = str[i];
	}
	cout << "��������Ϊ��\n" << obj << endl;


	return 0;
}
