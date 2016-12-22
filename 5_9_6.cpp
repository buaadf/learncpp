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
	int sales[3][12];
	int sum[3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			cout << "Please enter the sales volume of " << month[j] << " of year"<<i<<":";
			cin >> sales[i][j];
			sum[i] = sum[i] + sales[i][j];
		}
	}
	int sum_all = sum[0] + sum[1] + sum[2];
	cout << "month";
	for (int i = 0; i < 12; i++)
		cout << "\t" << month[i];
	for (int i = 0; i < 3; i++)
	{
		cout << endl << "year"<<i<<"\t";
		for (int j = 0; j < 12; j++)
			cout << sales[i][j] << "\t";
		cout << endl;
	}
	system("pause");
	return 0;
}