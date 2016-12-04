#include<iostream>
#include<string>
using namespace std;
struct William
{
	string company_name;
	double pizza_diameter;
	double pizza_weight;
};
int main()
{
	William pizza;
	cout << "Enter the name of the company: ";
	getline(cin, pizza.company_name);
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza.pizza_diameter;
	cout << "Enter the weight of the pizza:";
	cin >> pizza.pizza_weight;
	cout << "pizza: ";
	cout << "\tCompany: " << pizza.company_name << endl
		<< "\tdiameter: " << pizza.pizza_diameter << endl
		<< "\tweight: " << pizza.pizza_weight << endl;
	cin.get();
	cin.get();
	return 0;
}