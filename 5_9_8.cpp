#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char word[20];
	cout << "Enter words (to stop, type the word done): " << endl;
	cin >> word;
	int count = 0;
	while (strcmp(word, "done"))
	{
		++count;
		cin >> word;
	}
	cout << "You entered a total of " << count << " words.\n";
	system("pause");
	return 0;
}