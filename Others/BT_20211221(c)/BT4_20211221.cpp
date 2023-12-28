//Muc dich: liet ke gia tri am trong mang so thuc 
//Input: mang so thuc
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Neu gia tri thoa doan [x, y] thi xuat gia tri
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
void inputA(double a[], int n)
{
	cout << "Lap mang:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] =\t";
		cin >> a[i];
	}
}
void lap(double& x, double& y)
{
	do {
		cout << "So can liet ke thuoc doan: \t";
		cin >> x >> y;
		if (x > y)
			cout << "Nhap gia tri sai. Nhap lai.\n";
	} while (x > y);
}
void lietKe(double a[], int n, double x, double y)
{
	int t = 0;
	for (int i = 0; i < n; i++)
		if (a[i] <= y && a[i] >= x)
		{
			t++;
			if (t == 1)
				cout << "Cac so thuoc doan [" << x << ", " << y << "] trong mang:\t";
			cout << a[i] << "\t";
		}
	if (t == 0)
		cout << "khong co so thuoc doan [" << x << ", " << y << "] trong mang.\n";
}

int main()
{
	int n;
	double x, y;
	double a[MAXSIZE];
	input(n);
	inputA(a, n);
	lap(x, y);
	lietKe(a, n, x, y);
	cout << endl;
	return 0;
}