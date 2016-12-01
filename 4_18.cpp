//对数组使用new
#include<iostream>
int main()
{
	using namespace std;
	double * p3 = new double [3];      //分配3个double的内存空间
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;                       //指针加1
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;                       //指针恢复为最初
	delete [] p3;
	cin.get();
	return 0;
}