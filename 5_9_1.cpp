#include<iostream>
int main()
{
	using namespace std;
	cout<<"Please enter 2 numbers:\n";
	cout<<"Enter the smaller number:";
	int min;
	cin>>min;
	cout<<"Enter the larger number:";
	int max;
	cin>>max;
	int sum = 0;
	for(int i=min;i<=max;i++)
	{
		sum = sum+i;
	}
	cout<<"The sum of numbers between "<<min<<" and "<<max<<" is "<<sum<<endl;
	return 0;
}
