//Muc dich: them 1 phan tu vao mang
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Doi cac gia tri tu vi tri can gan ra sau 1 don vi
//		Chen gia tri muon them vao vi tri can them
//		Tang so thu tu cua mang 1 don vi
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
void inputThem(int& x, int n)
{
	do {
		cout << "Vi tri ban muon them la:\t";
		cin >> x;
		if (x < 0 || x > n)
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (x < 0 || x > n);
}
void them(int a[], int& n, int x)
{
	if (n == MAXSIZE)
	{
		cout << "Mang da day, khong the them.\n";
		return;
	}
	for (int i = n; i >= x; i--)
		a[i + 1] = a[i];
	cout << "Nhap gia tri vao vi tri a[" << x << "]:\t";
	cin >> a[x];
	n = n + 1;
}
void lietKe(int a[], int n)
{
	cout << "Mang sau khi duoc them gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}

int main()
{
	int n, x;
	int a[MAXSIZE];
	input(n);
	inputA(a, n);
	inputThem(x, n);
	them(a, n, x);
	cout << endl;
	lietKe(a, n);
	return 0;
}