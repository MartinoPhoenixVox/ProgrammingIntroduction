//Muc dich: tim gia tri nho / lon nhat 
//Input: mang so nguyen
//Kieu void
//Thuat giai: 
//	1. Lap toi khi xet du so trong mang
//		Neu gia tri nho / lon hon tat ca cac so con lai thi no nho / lon nhat 
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
void doan(double a[], int n, double& x, double& y)
{	
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			x = a[i];
		}
		if (a[i] > y)
			y = a[i];
	}
}

int main()
{
	int n;
	double x = INT_MAX,y = INT_MIN;
	double a[MAXSIZE];
	input(n);
	inputA(a, n);
	doan(a, n, x, y);
	cout << "Doan [" << x << ", " << y << "] chua tat ca cac gia tri cua mang";
	cout << endl;
	return 0;
}