#include<iostream>

int main()
{
	using namespace std;
	const double t = 60;

	int degrees,minutes,seconds;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl<< "First, enter the degree: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout  << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	double la = (seconds / t + minutes) / t + degrees;
	cout  << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << la << " degrees";
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}