/*Viet chuong trinh mo ta cach tinh tong tri gia mot don hang cua mot cua hang ban sach, dua tren tong so tien mua va tong so sach mua
Date: Nov-4,2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int tongSach = 0;
	double tongTien = 0.0, thue = 0.0, tienChuyen = 0.0, tongGia = 0.0;
	cout << "Nhap tong so sach: ";
	cin >> tongSach;
	cout << "Nhap tong so tien: ";
	cin >> tongTien;
	thue = tongTien * 0.075;
	tienChuyen = tongSach * 2000;
	tongGia = tongTien + thue + tienChuyen;
	cout << "Tong gia tri cua don hang la " << fixed << setprecision(0) << tongGia << endl;
	return 0;
}