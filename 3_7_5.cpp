#include<iostream>
int main()
{
	using namespace std;
	
	long long population;
	long long population_US;
	
	cout << "Enter the world's population:";
	cin >> population;
	cout << "Enter the population of the US:";
	cin >> population_US;
	double persent = long double(population_US) / long double(population);     //�Ƚ�������ת�����ٽ��г��������򽫽�����������������ܿ�����0

	cout << "The population of the US is " << persent * 100.0 << "% of the world population.";
	cin.get();
	cin.get();
	cin.get();
	return 0;
}