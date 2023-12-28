/*Chuong trinh nhan vao 1 so nguyen, xuat ra man hinh so nguyen do la so am, so duong hay la so 0
Date: Nov-13, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> soNguyen;
	if (soNguyen < 0)
		cout << soNguyen << " la so am.\n";
	else
		if (soNguyen == 0)
			cout << soNguyen << " la so 0.\n";
		else
			cout << soNguyen << " la so duong.";
	return 0;
}