#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	//两种表示值的方法
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	//两种表示地址的方法
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	//使用指针改变值
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	cin.get();
	return 0;
}