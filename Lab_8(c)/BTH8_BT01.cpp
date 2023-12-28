#include <iostream>
#define MAXSIZE 50
using namespace std;

int main()
{
	//Khai bao
	double alpha[MAXSIZE];
	//Khoi tao gia tri
	for (int i = 0; i < MAXSIZE; i++)
	{
		if (i < 25)
			alpha[i] = i * i;
		else
			alpha[i] = i * i * i;
	}
	//Xuat mang moi dong 10 phan tu
	cout << "Mang dang luu:";
	for (int i = 0; i < MAXSIZE; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << alpha[i] << "\t";
	}
	return 0;
}