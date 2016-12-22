#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string word;
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	int count = 0;
	while (word!="done")
	{
		++count;
		cin >> word;
	}
	cout << "You entered a total of " << count << " words.\n";
	system("pause");
	return 0;
}