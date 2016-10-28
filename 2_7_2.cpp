#include<iostream>
int longtoma(int);

int main()
{
	using namespace std;
	int lon;
	cout << "Enter a distance in long: ";
	cin >> lon;
	int ma = longtoma(lon);
	cout << lon << " long = " << ma << " ma" << endl;
	cin.get();
	cin.get();
	return 0;
}

int longtoma(int lo)
{
	return 220 * lo;
}