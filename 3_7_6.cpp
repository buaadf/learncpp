#include<iostream>
int main()
{
	using namespace std;
	double distance, gas;
	cout << "����������̣������";
	cin >> distance;
	cout << "�����������������";
	cin >> gas;
	double gas_per_100km = gas / distance * 100;
	cout << "ÿ100�������" << gas_per_100km << "����";
	cin.get();
	cin.get();
	return 0;
}