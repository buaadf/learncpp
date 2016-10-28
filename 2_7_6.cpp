#include<iostream>
double convert(double);

int main()
{
	using namespace std;
	cout << "Enter the number of light years: ";
	double lightyears;
	cin >> lightyears;
	double astronomical = convert(lightyears);
	cout << lightyears << " light years = " << astronomical << " astronomical units.";
	cin.get();
	cin.get();
	return 0;
}

double convert(double light)
{
	return 63240 * light;
}