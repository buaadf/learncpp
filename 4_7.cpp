//strtype1.cpp  ����ʹ��C++string��
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char charr1[20];                              //����һ��������
	char charr2[20] = "jaguar";                   //����һ����ʼ������
	string str1;                                  //����һ����string����
	string str2 = "panther";                      //����һ����ʼ������

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;                                  //ʹ��cin��������
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2                    //ʹ��cout�������
		<< endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;                       //ʹ�������ʾ��
	cin.get();
	cin.get();
	cin.get();
	return 0;
}