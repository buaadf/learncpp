#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	cout << "Enter your first name: ";
	char firstname[20];
	cin >> firstname;
	cout << "Enter your last name: ";
	char lastname[20];
	cin >> lastname;
	char name[40];
	strcpy(name, lastname);
	strcat(name, ", ");
	strcat(name, firstname);
	cout << "Here's the information in a single string: " << name;
	cin.get();
	cin.get();
	return 0;
}