//De bai: Viet ham sap xep cac phan tu trong mang tang dan

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAXSIZE 100

//Ham nhap so nguyen
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
		a[i] = rand() % 100;
}

//Ham xuat mang de kiem tra
void xuatMang(const int a[MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << a[i] << "\t";
	}
}

//Ham dao gia tri
void dao(int &x, int &y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}

//Ham sap xep mang tang dan
void sapXepTang(int a[MAXSIZE], int n)
{
	for (int i = 1; i < n; i++)
		for (int j = 0; j < i; j++)
		{
			if (a[j] > a[i])
				dao(a[i], a[j]);
		}
}


int main()
{
	//khai bao va khoi tao bien
	int n;

	//nhap so luong phan tu mang
	cout << "Mang co bao nhieu phan tu ?\t";
	nhap(n, 0, MAXSIZE + 1);

	//khai bao va khoi tao mang
	int a[MAXSIZE] = { 0 };
	khoiTaoMang(a, n);

	//xuat mang de kiem tra
	cout << "Mang da duoc khoi tao nhu sau:";
	xuatMang(a, n);

	//sap xep mang tang dan
	sapXepTang(a, n);
	cout << endl;

	//xuat mang de kiem tra lan sau
	cout << "Mang da duoc sap xep tang dan nhu sau nhu sau:";
	xuatMang(a, n);

	//tra ve gia tri
	return 0;
}