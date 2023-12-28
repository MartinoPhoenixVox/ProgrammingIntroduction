/*Chuong trinh yeu cau nhap ten, so ngay lam viec va tien cong 1 ngay, sau do in ra ten va tien luong nhan duoc (tien luong = so ngay lam viec * tien cong 1 ngay)
Date: Nov-2, 2021*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string ten;
	int soNgay ;
	double tien1Ngay ;
	double luong ;
	cout << "Ban ten gi?\n";
	getline(cin, ten);
	cout << "So ngay lam viec cua ban: ";
	cin >> soNgay;
	cout << "So tien ban kiem duoc trong 1 ngay: ";
	cin >> tien1Ngay;
	luong = soNgay * tien1Ngay;
	cout << "Xac nhan lai: Ban ten la " << ten << endl
		<< "Va sau 1 thang ban thu duoc " << fixed << setprecision(0) << luong << endl;
	return 0;
}