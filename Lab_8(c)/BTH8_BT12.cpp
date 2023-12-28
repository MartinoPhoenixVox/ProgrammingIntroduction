//De bai: Viet ham xoa cac phan tu trung nhau trong mang

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAXSIZE 100

//Ham nhap gia tri so nguyen
void nhap(int& n, int a, int b)
{
	do {
		cin >> n;
		if (n <= a || n >= b)
			cout << "Nhap sai. Nhap lai:\t";
	} while (n <= a || n >= b);
}

//Ham khoi tao mang
void khoiTaoMang(int a[MAXSIZE], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % 2;
}

//Ham xuat mang
void xuatMang(const int a[MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << a[i] << "\t";
	}
}

//Ham xoa 1 gia tri khoi mang
void xoa1(int a[MAXSIZE], int &n, int x)
{
	for (int i = x; i < n; i++)
		a[i] = a[i + 1];
	n--;
}

//Ham xoa cac gia tri trung khoi mang
void xoaTrung(int a[MAXSIZE], int& n)
{
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
			{
				xoa1(a, n, i);
				i--;
			}
		}
}

int main()
{
	//khai bao va khoi tao bien
	int n;

	//nhap so luong phan tu mang
	cout << "Mang chua bao nhieu phan tu ?\t";
	nhap(n, 0, MAXSIZE + 1);
	cout << endl;

	//khai bao va khoi tao mang
	int arr[MAXSIZE] = { 0 };
	khoiTaoMang(arr, n);

	//xuat mang de kiem tra lan 1
	cout << "Mang da duoc khoi tao co nhung gia tri:";
	xuatMang(arr, n);
	cout << endl;

	//xoa cac gia tri bi trung khoi mang
	xoaTrung(arr, n);

	//xuat mang de kiem tra lan 2
	cout << "Mang sau khi xoa cac gia tri bi trung:";
	xuatMang(arr, n);
	cout << endl;

	//tra ve gia tri
	return 0;
}