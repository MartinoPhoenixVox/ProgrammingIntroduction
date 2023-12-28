/*Chuong trinh nhan vao thang, xuat ra man hinh so ngay cua thang do
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int thang;
	cout << "Nhap vao thang: ";
	cin >> thang;
	if (thang <= 0 || thang > 12)
		cout << "Gia tri nhap khong hop le\n";
	else
		switch (thang)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "Thang " << thang << " co 31 ngay";
			break;
		case 4: case 6: case 9: case 11:
			cout << "Thang " << thang << " co 30 ngay";
			break;
		default:
			cout << "Thang " << thang << " co 28 hoac 29 ngay";
			break;
		}
	return 0;
}