#include<iostream>
int main()
{
	using namespace std;
	int x;

	cout << "The expression x=100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl; 
	cout.setf(ios_base::boolalpha);                         //一个新的C++特征
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl; 
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cin.get();
	return 0;
}