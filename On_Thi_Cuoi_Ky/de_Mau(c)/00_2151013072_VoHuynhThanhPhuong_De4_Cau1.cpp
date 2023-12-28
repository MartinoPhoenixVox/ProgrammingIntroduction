#include <iostream>

using namespace std;

//Ham nhap gia tri so nguyen
void nhap(int& n, int a, int b)
{
	do {
		cin >> n;
		if (n <= a || n >= b)
			cout << "Nhap sai. Nhap lai:\t";
	} while (n <= a || n >= b);
}

//Yeu cau a: tu n1 den n2 co bao nhieu so la boi cua 5 (n1, n2 la so nguyen duong)
int demBoi5(int n1, int n2)
{
	int dem = 0;
	for (int i = n1; i <= n2; i++)
		if (i % 5 == 0)
			dem++;
	return dem;
}

//Ham kiem tra so le
bool kiemSoLe(int n1, int n2)
{
	for (int i = n1; i <= n2; i++)
		if (i % 2 != 0)
			return true;
	return false;
}

//Yeu cau b: xuat tat ca cac so le tu n1 den n2 (n1, n2 la so nguyen duong). Khong co so le thi bao khong co
void xuatSoLe(int n1, int n2)
{
	if (!kiemSoLe)
		cout << "Khong co so le tu [" << n1 << "] den [" << n2 << "]\n";
	else
	{
		cout << "Cac so le trong pham vi tu [" << n1 << "] den [" << n2 << "]:\n";
		for (int i = n1; i <= n2; i++)
			if (i % 2 != 0)
				cout << i << "\t";
	}
}

int main()
{
	//khai bao va khoi tao bien
	int n1, n2;

	//nhap n1 va n2
	cout << "Nhap n1:\t";
	nhap(n1, 0, 101);
	cout << "Nhap n2:\t";
	nhap(n2, n1 - 1, 101);

	//dem boi 5
	cout << "Tu [" << n1 << "] den [" << n2 << "], so gia tri nguyen duong la boi cua 5: [" << demBoi5(n1, n2) << "]" << endl;

	//xuat so le
	xuatSoLe(n1, n2);


	// tra ve gia tri
	return 0;
}