#include<iostream>
#include<string>
int main()
{
	using namespace std;
	struct car
	{
		string make;
		int year;
	};
	cout << "How many cars do you wish to catalog? ";
	int num;
	cin >> num;
	cin.get();     //���û����һ�У�cin��ȡ���ֺ󣬽��س������ɵĻ��з���������������У�
	                  //�����getline�������з��󣬽���Ϊ��һ������ ������һ�����ַ�������string����  
	car * pcar = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, pcar[i].make);
		cout << "Please enter the year made: ";
		cin >> pcar[i].year;
		cin.get();    //ͬ��
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; i++)
		cout << pcar[i].year << " " << pcar[i].make << endl;
	delete[] pcar;
	system("pause");
	return 0;
}