//strtype3.cpp 
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];                              //����һ��������
	char charr2[20] = "jaguar";                   //����һ����ʼ������
	string str1;                                  //����һ����string����
	string str2 = "panther";                      //����һ����ʼ������

	//string������ַ�����ĸ�ֵ
	str1 = str2;
	strcpy_s(charr1, charr2);                     //������ʹ��strcpyʱ�������棬�޷����ɣ�����ʹ��strcpy_s

	//string������ַ�����ĸ���
	str1 += " paste";
	strcat_s(charr1, " juice");                   //������ʹ��strcatʱ�������棬�޷����ɣ�����ʹ��strcat_s

	//��ȡstring�����C-����ַ����ĳ���
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	cin.get();
	return 0;
}