//strtype3.cpp 
#include<iostream>
#include<string>
#include<cstring>
int main()
{
	using namespace std;
	char charr1[20];                              //创建一个空数组
	char charr2[20] = "jaguar";                   //创建一个初始化数组
	string str1;                                  //创建一个空string对象
	string str2 = "panther";                      //创建一个初始化对象

	//string对象和字符数组的赋值
	str1 = str2;
	strcpy_s(charr1, charr2);                     //这里在使用strcpy时发出警告，无法生成，建议使用strcpy_s

	//string对象和字符数组的附加
	str1 += " paste";
	strcat_s(charr1, " juice");                   //这里在使用strcat时发出警告，无法生成，建议使用strcat_s

	//获取string对象和C-风格字符串的长度
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	cin.get();
	return 0;
}