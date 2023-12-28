/*Chuog trinh nhan vao thang va nam, xuat ra man hinh so ngay cua thang do
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	int nam, thang; 
	bool nhuan = false;
	cout << "Nhap nam: ";
	cin >> nam;
	cout << "Nhap vao thang: ";
	cin >> thang;
	
	if (nam < 0 || (thang <= 0 || thang > 12))
		cout << "Gia tri nhap khong hop le\n";
	else
	{	
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
			nhuan = true;
		else
			nhuan = false;
		switch (thang)
		{
		case 4: case 6: case 9: case 11:
			cout << "So ngay cua thang " << thang << " nam " << nam << " la 30 ngay\n";
			break;
		case 2:
			if (nhuan == true)
				cout << "So ngay cua thang " << thang << " nam " << nam << " la 29 ngay\n";
			else
				cout << "So ngay cua thang " << thang << " nam " << nam << " la 28 ngay\n";
			break;
		default:
			cout << "So ngay cua thang " << thang << " nam " << nam << " la 31 ngay\n";
			break;
		}	
	}
	return 0;
}