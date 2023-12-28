/*Chuong trinh nhan vao 1 so nguyen, xuat ra man hinh so nguyen do la so chan hay so le
Date: Nov-13,2021*/
#include <iostream>
using namespace std;

int main()
{
	int soNguyen;
	cout << "Nhap vao 1 so nguyen: ";
	cin >> soNguyen;
	if (soNguyen % 2 != 0)
		cout << soNguyen << " la so le.\n";
	else
		cout << soNguyen << " la so chan.\n";
	return 0;
}