#include<iostream>
#include<string>
using namespace std;
struct CandyBar
{
	string brand;
	double weight;
	int calorie;
};
int main()
{
	CandyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "snack: " << endl;
	cout << "brand: " << snack.brand << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "calorie: " << snack.calorie << endl;
	cin.get();
	return 0;
}