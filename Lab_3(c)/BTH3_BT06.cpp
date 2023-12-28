/*Chuong trinh nhan vao nam, xuat ra man hinh thong bao nam do la nam nhuan hay nam khong nhuan
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int nam;
	cout << "Nhap nam: ";
	cin >> nam;
	if (nam < 0)
		cout << "Nhap so nam khong hop le\n";
	else
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
			cout << "Nam " << nam << " la nam nhuan\n";
		else
			cout << "Nam " << nam << " khong la nam nhuan\n";
	return 0;
}