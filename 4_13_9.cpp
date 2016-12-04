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
	CandyBar * snack = new CandyBar[3];
	snack[0] = { "Mocha Munch", 2.3, 350 };
	snack[1] = { "Dabaitu", 5.6, 520 };
	snack[2] = { "Wowo", 3.6, 450 };
    int i;
	for (i = 0; i < 3; i++)
	{
		cout << "Candy " << i << endl;
		cout << "\tbrand: " << snack[i].brand << endl;
		cout << "\tweight: " << snack[i].weight << endl;
		cout << "\tcalorie: " << snack[i].calorie << endl;
	}
	delete [] snack;        //不要忘记delete，不要忘记[]
	cin.get();
	return 0;
}