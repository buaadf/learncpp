#include<iostream>
int main()
{
	using namespace std;
	const double miles_100km = 62.14;  //100����=62.14Ӣ��
	const double gallon_L = 3.875;    //1����=3.875��
	double gas_per_100km;

	cout << "����ÿ�ٹ����������������";
	cin >> gas_per_100km;
	double miles_per_gallon = (1 / gas_per_100km)*miles_100km*gallon_L;
	cout << "ÿ�������Ϳ�����" << miles_per_gallon << "Ӣ�";
	cin.get();
	cin.get();
	return 0;
}