//Muc dich: xoa 1 phan tu khoi mang
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Doi cac gia tri tu vi tri can gan ra truoc 1 don vi
//		Giam so thu tu cua mang 1 don vi
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
void inputXoa(int& x, int n)
{
	do {
		cout << "Vi tri ban muon xoa la:\t";
		cin >> x;
		if (x < 0 || x >= n)
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (x < 0 || x >= n);
}
void xoa(int a[], int& n, int x)
{
	for (int i = x; i < n; i++)
		a[i] = a[i + 1];
	n = n - 1;
}
void lietKe(int a[], int n)
{
	cout << "Mang sau khi duoc xoa gom cac so:\t";
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
	inputXoa(x, n);
	xoa(a, n, x);
	cout << endl;
	lietKe(a, n);
	return 0;
}