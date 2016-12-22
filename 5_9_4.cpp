#include<iostream>
int main()
{
	using namespace std;
	double Daphne[100];
	double Cleo[100];
	Daphne[0] = 100;
	Cleo[0] = 100;
	int i = 0;
	while (Daphne[i] >= Cleo[i])
	{
		Daphne[i+1] = 100 + 10 * (i+1);
		Cleo[i+1] = Cleo[i] * 1.05;
		i++;
	}
	cout << i << "年后，Cleo的投资价值将超过Daphne。" << endl;
	cout << "此时，Cleo的投资价值为" << Cleo[i] << "美元；" << "Daphne的投资价值为" << Daphne[i] << "美元。"<<endl;
	system("pause");
	return 0;
}