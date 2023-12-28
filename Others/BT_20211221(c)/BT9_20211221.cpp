//Muc dich: sao chep phan tu vao mang bat ky
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Neu so can xet la so am thi dua vao mang b
//		Neu so can xet la so duong thi dua vao mang c
#include <iostream>
#define MAXSIZE 100
using namespace std;

void input(int& n)
{
	do {
		cout << "Mang gom bao nhieu so?\t";
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
void inputB(int a[],int b[], int n, int& m)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			b[m] = a[i];
			m++;
		}
	}
}
void inputC(int a[], int b[], int n, int& o)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			b[o] = a[i];
			o++;
		}
	}
}
void lietKeA(int a[], int n)
{
	cout << "Mang a gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}
void lietKeB(int a[], int n)
{
	cout << "Mang b sau khi duoc sao chep gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}
void lietKeC(int a[], int n)
{
	cout << "Mang c sau khi duoc sao chep gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}

int main()
{
	int n, m = 0, o = 0;
	int a[MAXSIZE];
	int b[MAXSIZE];
	int c[MAXSIZE];
	input(n);
	inputA(a, n);
	lietKeA(a, n);
	inputB(a, b, n, m);
	lietKeB(b, m);
	inputC(a, c, n, o);
	lietKeC(c, o);
	return 0;
}