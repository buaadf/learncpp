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
	cout << i << "���Cleo��Ͷ�ʼ�ֵ������Daphne��" << endl;
	cout << "��ʱ��Cleo��Ͷ�ʼ�ֵΪ" << Cleo[i] << "��Ԫ��" << "Daphne��Ͷ�ʼ�ֵΪ" << Daphne[i] << "��Ԫ��"<<endl;
	system("pause");
	return 0;
}