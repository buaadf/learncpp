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
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;           //将一个结构赋值给另一个
	cout << "choice: " << choice.name << " fot $";
	cout << choice.price << endl;

	cin.get();
	return 0;
}