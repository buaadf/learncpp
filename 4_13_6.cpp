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
	CandyBar snack[3]
	{
		{"Mocha Munch", 2.3, 350}, {"Dabaitu", 5.6, 520}, {"Wowo", 3.6, 450}
	};
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "Candy " << i << endl;
		cout << "\tbrand: " << snack[i].brand << endl;
		cout << "\tweight: " << snack[i].weight << endl;
		cout << "\tcalorie: " << snack[i].calorie << endl;
	}
	cin.get();
	return 0;
}