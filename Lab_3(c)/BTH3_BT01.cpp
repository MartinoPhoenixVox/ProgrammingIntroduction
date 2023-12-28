/*Chuong trinh nhan vao diem trung binh 1 mon hoc cua mot sinh vien roi xuat ra man hinh thong bao cho biet sinh vien nay dau hay rot 
Date: Nov-9, 2021*/
#include <iostream>
using namespace std;

int main()
{
	double diemTrungBinh = 0;
	cout << "Nhap diem trung binh cua ban: ";
	cin >> diemTrungBinh;
	if (diemTrungBinh > 0 && diemTrungBinh < 10)
		if (diemTrungBinh < 5)
			cout << "Ban rot mon nay.\n";
		else
			cout << "Ban dau mon nay\n";
	else
		cout << "Nhap thong tin khong hop le.\n";
	return 0;
}