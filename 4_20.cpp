#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";                //animal����bear
	const char * bird = "wren";              //bird�����ַ����ĵ�ַ
	char * ps;                                        //δ��ʼ��

	cout << animal << " and ";             //��ʾbear
	cout << bird << "\n";                      //��ʾwren
	//cout << ps <<"\n";                      //������ʾ���������ܵ��±���

	cout << "Enter a kind of animal: ";
	cin >> animal;                                //����<20���ַ�
	//cin>>ps;                                     //���ܵ������صĺ����psû��־�򱻷���Ŀռ�

	ps = animal;                                  //��psָ���ַ���
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];     //����µĴ洢��
	_CRT_SECURE_NO_WARNINGS; strcpy(ps, animal);                            //���ַ������Ƶ��µĴ洢��
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;

	cin.get();
	cin.get();
	return 0;
}