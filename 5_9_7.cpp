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
	cin.get();     //如果没有这一行，cin读取数字后，将回车键生成的换行符留在了输入队列中，
	                  //后面的getline看到换行符后，将认为是一个空行 ，并将一个空字符串赋给string对象  
	car * pcar = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i+1 << ":" << endl;
		cout << "Please enter the make: ";
		getline(cin, pcar[i].make);
		cout << "Please enter the year made: ";
		cin >> pcar[i].year;
		cin.get();    //同上
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; i++)
		cout << pcar[i].year << " " << pcar[i].make << endl;
	delete[] pcar;
	system("pause");
	return 0;
}