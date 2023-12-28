#include <iostream>
//Dinh nghia MAXSIZE
#define MAXSIZE 100
using namespace std;

int main()
{
	//Khai bao mang
	double values[MAXSIZE];
	//Khai bao currentSize
	int currentSize;
	cout << "Nhap kich co hien tai cua mang: ";
	//Nhap gia tri currentSize
	do {
		cin >> currentSize;
		if (currentSize <= 0 || currentSize > MAXSIZE)
			cout << "Nhap sai. Nhap lai: ";
	} while (currentSize <= 0 || currentSize > MAXSIZE);
	//Nhap mang
	for (int i = 0; i < currentSize; i++)
	{
		cout << "values[" << i << "] = ";
		cin >> values[i];
	}
	//In mang
	cout << "Mang dang luu tru:\n";
	for (int i = 0; i < currentSize; i++)
	{
		cout << values[i];
		if (i < currentSize - 1)
			cout << ",\t";
	}
	return 0;
}