//4.13±‡≥Ã¡∑œ∞ 1
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	enum grade {A, B, C, D};
	cout << "What is your first name? ";
	string first_name;
	getline(cin, first_name);
	cout << "What is your last name? ";
	string last_name;
	cin >> last_name;
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;
	cin.get();
	cin.get();
	return 0;
}