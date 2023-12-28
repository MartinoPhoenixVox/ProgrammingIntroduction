//Muc dich: liet ke gia tri am trong mang so nguyen
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Neu gia tri am thi xuat gia tri
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
void lietKe(int a[], int n)
{
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{ 
			t++;
			if (t == 1)
				cout << "Cac so nguyen am trong mang:\t";
			cout << a[i] << "\t";
		}
	}
	if (t == 0)
		cout << "khong co so nguyen am trong mang.\n";
}

int main()
{
	int n;
	int a[MAXSIZE];
	input(n);
	inputA(a, n);
	lietKe(a, n);
	cout << endl;
	return 0;
}