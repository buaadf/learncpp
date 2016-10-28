#include<iostream>
int yeartomonth(int);

int main()
{
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int month = yeartomonth(age);
	cout << "You are " << month << " months old." << endl;
	cin.get();
	cin.get();
	return 0;
}

int yeartomonth(int year)
{
	return 12 * year;
}