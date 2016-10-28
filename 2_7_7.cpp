#include<iostream>
using namespace std;
void time(int, int);

int main()
{
	int hour, minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	time(hour,minute);
	cin.get();
	cin.get();
	return 0;
}

void time(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}
