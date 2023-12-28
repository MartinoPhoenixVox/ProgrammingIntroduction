//Muc dich: sap xep phan tu tang dan
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Neu so can xet nho hon so o vi tri 0 thi doi cho no voi so o vi tri 0
//		Neu khong thi xet neu no nho hon vi tri tiep theo
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
void tangDan(int a[], int n)
{
	int tam;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
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
	cout << "Mang sau khi duoc sap xep gom cac so:\t";
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}

int main()
{
	int n;
	int a[MAXSIZE];
	input(n);
	inputA(a, n);
	tangDan(a, n);
	cout << endl;
	lietKe(a, n);
	return 0;
}