//De bai: Viet chuong trinh in cac so nguyen to tu 2 den n bang sang Eratosthenes
// Thuat giai cho sang Eratosthenes
//	B1: Tao mang chua cac so nguyen tu 2... n
//	B2: Bat dau tu so nguyen to dau tien p = 2
//	B3: Danh dau tat ca cac boi so cua p khong phai la so nguyen to (2p, 3p, 4p, ...)
//	B4: Tim so ke tiep lon hon p chua bi danh dau. Neu ko co thi thuat giai ket thuc. Nguoc lai dat p la so nay va quay lai B3

#include <iostream>
#include <cmath>

using namespace std;

#define MAXSIZE 300

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
void khoiTaoMang1(int a[MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = i + 2;
}

void khoiTaoMang2(bool a[MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
		a[i] = true;
}

//Ham xuat mang
void xuatMang(const int a[MAXSIZE],const bool b[MAXSIZE], int n, bool x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 20 == 0)
			cout << endl;
		if (!x)
			cout << a[i] << "\t";
		else
			if (b[i])
				cout << a[i] << "\t";
	}
}

//Ham Eratosthenes
void era(const int a[MAXSIZE], bool b[MAXSIZE], int n)
{
	for (int i = 0; i < n; i++)
		for (int p = 2; p <= sqrt((i + 2) * 1.0); p++)
		{
			if (a[i] == p)
				break;
			if (a[i] % p == 0)
			{
				b[i] = false;
				break;
			}
		}
}

int main()
{
	//khai bao va khoi tao bien
	int n;
	bool xuat = false;

	//nhap so luong phan tu mang
	cout << "Mang chua bao nhieu phan tu ?\t";
	nhap(n, 0, MAXSIZE + 1);
	cout << endl;
	cout << "Vay mang se bat dau tu [2] den [" << n + 1 << "]\n";

	//khai bao va khoi tao mang
	int arr[MAXSIZE] = { 0 };
	bool arrBool[MAXSIZE] = { 0 };
	khoiTaoMang1(arr, n);
	khoiTaoMang2(arrBool, n);

	//xuat mang de kiem tra
	cout << "Mang da duoc khoi tao co nhung gia tri:\n";
	xuatMang(arr, arrBool, n, xuat);
	cout << endl;

	//Dung ham Eratosthenes de loai cac gia tri khong la so nguyen to
	era(arr, arrBool, n);
	xuat = true;

	//xuat cac gia tri la so nguyen to
	cout << "Cac gia tri la so nguyen to trong mang:\n";
	xuatMang(arr, arrBool, n, xuat);

	//tra ve gia tri
	return 0;
}