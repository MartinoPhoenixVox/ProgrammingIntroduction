//Muc dich: sap xep sao cho so phan tu chan tang, so phan tu le giam
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. 
#include <iostream>
#define MAXSIZE 100
using namespace std;

void input(int& n)
{
	do {
		cout << "Ban can xet bao nhieu so?\t";
		cin >> n;
		if (n <= 0)
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (n <= 0);
}
void inputA(int a[], int n)
{
	cout << "Lap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =\t";
		cin >> a[i];
	}
}
void tangDanChan(int a[], int n)
{
	int tam;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i] && a[j] % 2 == 0 && a[i] % 2 == 0)
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
				continue;
			}
			else continue;
		}
	}
}
void giamDanLe(int a[], int n)
{
	int tam;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] < a[i] && a[j] % 2 != 0 && a[i] % 2 != 0)
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
				continue;
			}
			else continue;
		}
	}
}

void lietKe(int a[], int n)
{
	cout << "Mang gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}

int main()
{
	int n, x = 0;
	int a[MAXSIZE];
	input(n);
	inputA(a, n);
	tangDanChan(a, n);
	giamDanLe(a, n);
	cout << endl;
	lietKe(a, n);
	return 0;
}