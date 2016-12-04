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
	William * pizza = new William;
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza->pizza_diameter;
	cout << "Enter the name of the company: ";
	cin.get();                                  //输入直径后，输入队列中还有换行符
	getline(cin, pizza->company_name);
	cout << "Enter the weight of the pizza:";
	cin >> pizza->pizza_weight;
	cout << "pizza: ";                                             
	cout << "\tCompany: " << pizza->company_name << endl
		<< "\tdiameter: " << pizza->pizza_diameter << endl
		<< "\tweight: " << pizza->pizza_weight << endl;
	delete pizza;
	cin.get();
	cin.get();
	return 0;
}