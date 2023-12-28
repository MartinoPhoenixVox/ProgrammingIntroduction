/*Chuong trinh yeu cau nhap vao do nguyen duong gom 3 chu so, sau do in ra tong cua 3 chu so va so dao nguoc
Date: Nov-2, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	cout << "Nhap so nguyen duong gom 3 chu so: ";
	cin >> a;
	b = a / 10 / 10;
	c = a / 10 % 10;
	d = a % 10;
	e = b + c + d;
	f = d * 100 + c * 10 + b;
	cout << "Tong cua 3 chu so: " << e << "\nSo dao nguoc cua so nguyen duong: "
		<< f << endl;
	return 0;
}
