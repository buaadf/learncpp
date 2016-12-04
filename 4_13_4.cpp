#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	string firstname;
	cin >> firstname;
	cout << "Enter your last name: ";
	string lastname;
	cin >> lastname;
	string name = lastname + ", " + firstname;
	cout << "Here's the information in a single string: " << name;
	cin.get();
	cin.get();
	return 0;
}