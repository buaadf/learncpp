#include<iostream>

int main()
{
	using namespace std;
	const int inches_per_ft = 12;           //1ft=12inches
	int inches;
	cout << "Please enter your height in inches:__\b\b";
	cin >> inches;
	int feet = inches / inches_per_ft;
	int ins = inches%inches_per_ft;
	cout << "You are " << feet << " feet & " << ins << " inches" << endl;
	cin.get();
	cin.get();
	return 0;
}