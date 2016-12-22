#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter number of rows: ";
	int number;
	cin >> number;
	char * pstar = new char[number];
	for (int i = number-1; i >=0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			pstar[j] = '.';	
		}
		pstar[i] = '*';
		cout << pstar << "\n";
	}
	delete[] pstar;
	system("pause");
	return 0;
}