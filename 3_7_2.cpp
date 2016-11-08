#include<iostream>
#include<cmath>

int main()
{
	using namespace std;
	const int ins_per_ft = 12;
	const double m_per_ins = 0.0254;
	const double pds_per_kg = 2.2;
	int ft,ins,pds;
	
	cout << "Enter your height in feet and inches." << endl << "Feet:";
	cin >> ft;
	cout << "inches:";
	cin >> ins;
	cout << "Enter yout weight in pounds:";
	cin >> pds;

	double m = (ins_per_ft*ft + ins)*m_per_ins;
	double kg = pds / pds_per_kg;
	double BMI = kg / (m*m);

	cout << "Your BMI is: " << BMI << endl;
	cin.get();
	cin.get();
	cin.get();
	cin.get();
	return 0;
}