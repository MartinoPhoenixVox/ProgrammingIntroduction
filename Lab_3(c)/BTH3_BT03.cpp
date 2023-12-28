/*Chuong trinh nhan vao so nguyen n, xuat ra man hinh ket qua tri tuyet doi cua so nguyen do
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	int triTuyetDoi;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	if (n < 0)
		triTuyetDoi = -n;
	else
		triTuyetDoi = n;
	cout << "Tri truyet doi cua so nguyen n la: " << triTuyetDoi << endl;
	return 0;
}