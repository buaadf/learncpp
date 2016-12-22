#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string month[12] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};
	int sales[12];
	int sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Please enter the sales volume of " << month[i] << ":";
		cin >> sales[i];
		sum = sum + sales[i];
	}
	cout << "The sales volume of the whole year is " << sum << endl;
	system("pause");
	return 0;
}