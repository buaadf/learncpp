#include<iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable * ps = new inflatable;      //Ϊ�ṹ�����ڴ�
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);               //��ȡ��Ա�ķ���1
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;                  //��ȡ��Ա�ķ���2
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet\n";
	cout << "Price: $" << ps->price << endl;
	delete ps;
	cin.get();
	cin.get();
	return 0;
}