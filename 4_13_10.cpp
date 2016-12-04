#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<double, 3> grade;
	cout << "Enter your first grade: ";
	cin >> grade[0];
	cout << "Enter your second grade: ";
	cin >> grade[1];
	cout << "Enter your third grade: ";
	cin >> grade[2];
	double grade_avr = (grade[0] + grade[1] + grade[2]) / 3;
	cout << "The average grade of your 3 times grades is " << grade_avr;
	cin.get();
	cin.get();
	return 0;
}