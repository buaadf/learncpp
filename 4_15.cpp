#include<iostream>
int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	//���ֱ�ʾֵ�ķ���
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	//���ֱ�ʾ��ַ�ķ���
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	//ʹ��ָ��ı�ֵ
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	cin.get();
	return 0;
}