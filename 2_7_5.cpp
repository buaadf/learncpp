#include<iostream>
float convert(float);

float main()
{
	using namespace std;
	cout << "Enter the temperature in Celsius: ";
	float ce;
	cin >> ce;
	float F = convert(ce);
	cout << ce << "C= " << F << "F";
	cin.get();
	cin.get();
	return 0;
}

float convert(float cel)
{
	return 1.8*cel + 32;
}