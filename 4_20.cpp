#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";                //animal保存bear
	const char * bird = "wren";              //bird保存字符串的地址
	char * ps;                                        //未初始化

	cout << animal << " and ";             //显示bear
	cout << bird << "\n";                      //显示wren
	//cout << ps <<"\n";                      //可能显示垃圾，可能导致崩溃

	cout << "Enter a kind of animal: ";
	cin >> animal;                                //输入<20个字符
	//cin>>ps;                                     //可能导致严重的后果，ps没有志向被分配的空间

	ps = animal;                                  //将ps指向字符串
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];     //获得新的存储区
	_CRT_SECURE_NO_WARNINGS; strcpy(ps, animal);                            //将字符串复制到新的存储区
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;

	cin.get();
	cin.get();
	return 0;
}