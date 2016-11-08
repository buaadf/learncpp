#include<iostream>
int main()
{
	using namespace std;
	double distance, gas;
	cout << "输入驱车里程（公里）：";
	cin >> distance;
	cout << "输入耗油量（升）：";
	cin >> gas;
	double gas_per_100km = gas / distance * 100;
	cout << "每100公里耗油" << gas_per_100km << "升。";
	cin.get();
	cin.get();
	return 0;
}