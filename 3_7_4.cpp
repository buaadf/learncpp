#include<iostream>
int main()
{
	using namespace std;

	const int day_hour = 24;
	const int Sixty = 60;

	int seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;
	int days = seconds / Sixty / Sixty / day_hour;
	int seconds_l = seconds - days*day_hour*Sixty*Sixty;
	int hours = seconds_l / Sixty / Sixty;
	seconds_l = seconds_l - hours*Sixty*Sixty;
	int minutes = seconds_l / Sixty;
	seconds_l = seconds_l - minutes*Sixty;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds_l << " seconds";
	cin.get();
	cin.get();
	return 0;
}