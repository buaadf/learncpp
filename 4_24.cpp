#include<iostream>
#include<vector>
#include<array>
int main()
{
	using namespace std;
	//C，传统C++：
	double a1[4] = { 1.2, 2.4, 3.6, 4.8 };

	//C++98 STL：
	vector<double> a2(4);           //创建一个含有4个元素的vector对象

	//在C98中没有简单的初始化方法：
	a2[0] = 1.0 / 3.0;
	a2[1] = 1.0 / 5.0;
	a2[2] = 1.0 / 7.0;
	a2[3] = 1.0 / 9.0;

	//C++11--创建和初始化array对象：
	array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
	array<double, 4> a4;
	a4 = a3;                          //对相同长度的array对象进行赋值是有效的

	//使用数组记法：
	cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
	cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	//错误行为：
	a1[-6] = 20.2;
	cout << "a1[-6]: " << a1[-6] << " at " << &a1[-6] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

	cin.get();
	return 0;
}