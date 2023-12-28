#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MAXSIZE 40

//Ham nhap gia tri nguyen
void nhap0(int& n, int a, int b)
{
	do {
		cin >> n;
		if (n <= a || n >= b)
			cout << "Nhap sai. Nhap lai:\t";
	} while (n <= a || n >= b);
}

//Yeu cau a: nhap day so nguyen vao mang voi so phan tu n
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] =\t";
		cin >> a[i];
	}
}

//Ham khoi tao so nguyen ngau nhien dung de kiem thu 
void khoiTaoMang1(int a[], int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100 + rand() % 201;
}

//Ham khoi tao so nguyen tang dan tu 0 toi n - 1 dung de kiem thu
void khoiTaoMang2(int a[], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = i;
}

//Yeu cau b: xuat day so nguyen trong mang voi so phan tu n
void xuat(const int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 20 == 0)
			cout << endl;
		cout << a[i] << "\t";
	}
}

//Ham doi vi tri 2 gia tri
void doiSo(int& x, int& y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}

//Yeu cau c: dao nguoc mang
void daoNguoc(int a[], int n)
{
	for (int i = 0; i <=  (n - 1) / 2; i++)
			doiSo(a[i], a[n - 1 - i]); 
}

//Yeu cau d: sap nua dau mang tang dan, nua sau giam dan
void sapXep(int a[], int n)
{
	for (int i = 1; i <= (n - 1) / 2; i++)
		for (int j = 0; j < i; j++)
			if (a[i] < a[j])
				doiSo(a[i], a[j]);
	for (int i = n - 2; i > (n - 1) / 2; i--)
		for (int j = n - 1; j > i; j--)
			if (a[i] < a[j])
				doiSo(a[i], a[j]);
}

int main()
{
	//khai bao va khoi tao bien
	int chon;
	int n;
	bool check1 = false;

	//khai bao va khoi tao mang
	int arr[MAXSIZE] = { 0 };

	//menu
	do {
		system("cls");
		cout << "Menu co cac chuc nang:\n"
			<< "1. Nhap day so nguyen vao mang voi so phan tu n\n"
			<< "2. Xuat day so nguyen trong mang voi so phan tu n\n"
			<< "3. Dao nguoc mang\n"
			<< "4. Sap nua dau mang tang dan, nua sau giam dan\n"
			<< "5. Thoat\n"
			<< "Ban chon:\t";
		nhap0(chon, 0, 6);

		switch (chon)
		{
		case 1:
			cout << "So phan tu mang dang luu tru:\t";
			nhap0(n, 0, MAXSIZE + 1);
			nhap(arr, n);
			//khoiTaoMang1(arr, n);
			//khoiTaoMang2(arr, n);
			cout << "Thong bao: Da khoi tao thanh cong!";
			check1 = true;
			break;
		case 2:
			if (!check1)
				cout << "Thong bao: Ban chua nhap mang! Yeu cau nhap mang.";
			else
			{
				cout << "Mang dang luu tru:";
				xuat(arr, n);
			}
			break;
		case 3:
			if (!check1)
				cout << "Thong bao: Ban chua nhap mang! Yeu cau nhap mang.";
			else
			{
				daoNguoc(arr, n);
				cout << "Thong bao: Dao nguoc mang thanh cong!";
			}
			break;
		case 4:
			if (!check1)
				cout << "Thong bao: Ban chua nhap mang! Yeu cau nhap mang.";
			else
			{
				sapXep(arr, n);
				cout << "Thong bao: sap xep mang thanh cong!";
			}
			break;
		default:
			cout << "Thong bao: Thoat chuong trinh.\n";
		}

		_getch();
	} while (chon >= 1 && chon <= 4);

	//tra ve gia tri
	return 0;
}