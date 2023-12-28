//De bai: mang so nguyen co gia tri tu 1 toi k (k < 100)
// Viet ham: in so lan xuat hien cua moi phan tu trong mang

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
		// minN + rand() % (maxN + 1 - minN) //phat sinh so ngau nhien trong doan [minN,maxN]
		a[i] = 1 + rand() % 99;
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

//Ham sao chep mang
void saoMang(const int a[MAXSIZE], int n, int b[MAXSIZE], int& m)
{
	m = n;
	for (int i = 0; i < n; i++)
		b[i] = a[i];
}

//Ham xoa 1 gia tri khoi mang
void xoa1(int a[MAXSIZE], int& n, int x)
{
	for (int i = x; i < n; i++)
		a[i] = a[i + 1];
	n--;
}

//Ham xoa cac gia tri trung khoi mang
void xoaTrung(int a[MAXSIZE], int &n)
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

//Ham doc so
void xuatHien(const int a[MAXSIZE], int b[MAXSIZE], int c[MAXSIZE], int n, int& m)
{
	saoMang(a, n, b, m);
	xoaTrung(b, m);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[j] == b[i])
				c[i]++;
		}
}

int main()
{
	//khai bao va khoi tao bien
	int n, m;

	//nhap so luong phan tu mang
	cout << "Mang chua bao nhieu phan tu ?\t";
	nhap(n, 0, MAXSIZE + 1);
	cout << endl;

	//khai bao va khoi tao mang
	int arr[MAXSIZE] = { 0 };
	int b[MAXSIZE] = { 0 };
	int c[MAXSIZE] = { 0 };
	khoiTaoMang(arr, n);

	//xuat mang de kiem tra lan 1
	cout << "Mang da duoc khoi tao co nhung gia tri:";
	xuatMang(arr, n);
	cout << endl;

	//dem xem 1 gia tri xuat hien bao nhieu lan
	xuatHien(arr, b, c, n, m);

	//xuat ket qua dem duoc
	for (int i = 0; i < m; i++)
		cout << "Gia tri {" << b[i] << "} xuat hien [" << c[i] << "] lan\n";

	//tra ve gia tri
	return 0;
}