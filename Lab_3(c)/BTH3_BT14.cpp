/*Chuong trinh nhan vao 3 so nguyen, xuat ra man hinh 3 so do duoc sap xep tang dan (giam dan)
*Date: Nov-13, 2021
Date: Nov-16, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int tam;
	cout << "Nhap lan luot 3 so nguyen: ";
	cin >> a >> b >> c;
	// Tang dan:
	cout << "Cac so sau khi duoc xep theo thu tu tang dan: ";
	if (a < b)
		if (b < c)
			cout << a << ", " << b << ", " << c << endl;
		else
			if (a < c)
				cout << a << ", " << c << ", " << b << endl;
			else
				cout << c << ", " << a << ", " << b << endl;
	else
		if (a < c)
			cout << b << ", " << a << ", " << c << endl;
		else
			if (b < c)
				cout << b << ", " << c << ", " << a << endl;
			else
				cout << c << ", " << b << ", " << a << endl;

	// Cach khac:
	// b1: Neu a > b thi hoan doi gia tri a va b
	// b2: Neu a > c thi hoan doi gia tri a va c
	// b3: Neu b > c thi hoan doi gia tri b va c
	if (a > b)
	{
		tam = a;
		a = b;
		b = tam;
	}
	if (a > c)
	{
		tam = a;
		a = c;
		c = tam;
	}
	if (b > c)
	{
		tam = b;
		b = c;
		c = tam;
	}
	cout << a << ", " << b << ", " << c << endl;

	// Giam dan:
	cout << "Cac so duoc xep theo thu thu giam dan: ";
	if (a > b)
		if (b > c)
			cout << a << ", " << ", " << b << ", " << c << endl;
		else
			if (a > c)
				cout << a << ", " << c << ", " << b << endl;
			else 
				cout << c << ", " << a << ", " << b << endl;
	else
		if (a > c)
			cout << b << ", " << a << ", " << c << endl;
		else
			if (b > c)
				cout << b << ", " << c << ", " << a << endl;
			else
				cout << c << ", " << b << ", " << a << endl;

	//Cach khac:
	// b1: Neu a < b thi hoan doi gia tri a va b
	// b2: Neu a < c thi hoan doi gia tri a va c
	// b3: Neu b < c thi hoan doi gia tri b va c
	if (a < b)
	{
		tam = a;
		a = b;
		b = tam;
	}
	if (a < c)
	{
		tam = a;
		a = c;
		c = tam;
	}
	if (b < c)
	{
		tam = b;
		b = c;
		c = tam;
	}
	cout << a << ", " << b << ", " << c << endl;
	return 0;
}
