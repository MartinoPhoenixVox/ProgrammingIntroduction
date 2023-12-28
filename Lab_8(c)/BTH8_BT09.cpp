//De bai: a(n) * x ^ (n) + a(n - 1) * x ^ (n - 1) + a(n - 2) * x ^ (n - 2) + ... + a(0) * x ^ (0)
// Cac he so cua da thuc duoc luu trong mang a
// Viet ham nhan mang a, bac cua da thuc n, gia tri x
// Tra ve gia tri cua da thuc

//Ghi chu: mang a chay tu 0 toi n

#include <iostream>

using namespace std;

#define MAXSIZE 21
#define MAXNUM 10000 * 10000
#define MINNUM -10000 * 10000

//Ham nhan gia tri
void nhap(int& n, int a, int b)
{
	do {
		cin >> n;
		if (n <= a || n > b)
			cout << "Nhap sai. Nhap lai:\t";
	} while (n <= a || n > b);
}

//Ham nhan mang
void nhapMang(int a[MAXSIZE], int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << "Nhap tham so thu " << i << ":\t";
		nhap(a[i], MINNUM, MAXNUM);
	}
}

//Ham luy thua;
int luyThua(int x, int n)
{
	int kq = 1;
	while (n > 0)
	{
		kq *= x;
		n--;
	}
	return kq;
}

int main()
{
	//khai bao va khoi tao bien
	int n, x;
	int tong = 0;

	//khai bao va khoi tao mang
	int a[MAXSIZE] = { 0 };

	//Xuat dang da thuc
	cout << "Tinh da thuc:\t" << "A = a(n) * x ^ (n) + a(n - 1) * x ^ (n - 1) + a(n - 2) * x ^ (n - 2) + ... + a(0) * x ^ (0)\n";

	//nhap bac n
	cout << "Da thuc co bao nhieu bac ?\t";
	nhap(n, 0, MAXSIZE - 1);
	cout << endl;

	//nhap gia tri x
	cout << "x =\t";
	nhap(x, MINNUM, MAXNUM);
	cout << endl;

	//nhap mang a
	nhapMang(a, n);
	cout << endl;

	//tinh da thuc
	for (int i = n; i >= 0; i--)
		tong += a[i] * luyThua(x, i);
	cout << "A =\t" << tong;
	cout << endl;

	//tra ve gia tri
	return 0;
}