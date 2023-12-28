/*Chuong trinh:
* a) Nhap vao mot ky tu, sau do in ra ma ASCII cua ky tu do
* b) Nhap vao mot so nguyen (1...255), sau do in ra ky tu co ma ASCII tuong ung
Date: Nov-4,2021*/
#include <iostream>
using namespace std;

int main()
{
	//a) Nhap vao mot ky tu, sau do in ra ma ASCII cua ky tu do
	char kyTu;
	cout << "Nhap vao 1 ky tu: ";
	cin >> kyTu;
	cout << "Ma ASCII cua ky tu " << kyTu << " la:" << int(kyTu) << endl;
	//b) Nhap vao mot so nguyen (1...255), sau do in ra ky tu co ma ASCII tuong ung
	int soNguyen;
	cout << "nhap vao mot ma ASCII: ";
	cin >> soNguyen;
	cout << "Ky tu co ma " << soNguyen << " la " << char(soNguyen) << endl;
	return 0;
}