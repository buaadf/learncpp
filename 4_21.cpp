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
	inflatable * ps = new inflatable;      //为结构分配内存
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);               //获取成员的方法1
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;                  //获取成员的方法2
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