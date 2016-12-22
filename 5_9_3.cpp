#include<iostream>
#include<vector>

int main()
{
	using namespace std;
	vector<int> nums(100);
	int i = 0;
	cin >> nums[0];
	int sum = nums[0];
	for (i = 1; nums[i - 1] != 0; i++)
	{
		cout << "sum = " << sum << endl;
		cin >> nums[i];
		sum = sum + nums[i];
	}
	system("pause");
	return 0;
}