#include<iostream>
int main()
{
	using namespace std;
	const double miles_100km = 62.14;  //100公里=62.14英里
	const double gallon_L = 3.875;    //1加仑=3.875升
	double gas_per_100km;

	cout << "输入每百公里耗油量（升）：";
	cin >> gas_per_100km;
	double miles_per_gallon = (1 / gas_per_100km)*miles_100km*gallon_L;
	cout << "每加仑汽油可以跑" << miles_per_gallon << "英里。";
	cin.get();
	cin.get();
	return 0;
}