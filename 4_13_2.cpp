#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	getline(cin,name);       //¶ÁÈ¡Ò»ÐÐ
	cout << "Enter your favorite dessert:\n";
	getline(cin,dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	cin.get();
	return 0;
}