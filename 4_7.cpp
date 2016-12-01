//strtype1.cpp  ——使用C++string类
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char charr1[20];                              //创建一个空数组
	char charr2[20] = "jaguar";                   //创建一个初始化数组
	string str1;                                  //创建一个空string对象
	string str2 = "panther";                      //创建一个初始化对象

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;                                  //使用cin进行输入
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2                    //使用cout进行输出
		<< endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;                       //使用数组表示法
	cin.get();
	cin.get();
	cin.get();
	return 0;
}