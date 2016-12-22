#include<iostream>
int main()
{
	using namespace std;
	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers fir you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{                                                                            //Óï¾ä¿é¿ªÊ¼
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}                                                                           //Óï¾ä¿é½áÊø
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids you adieu!\n";
	cin.get();
	cin.get();
	return 0;
}