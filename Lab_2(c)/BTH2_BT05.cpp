/*Viet chuong trinh yeu cau nhap vao ba canh a, b, c cua tam giac, tinh va in ra dien tich tam giac
Date: Nov-2, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a = 0.0, b = 0.0, c = 0.0, p = 0.0, S = 0.0;
	cout << "Nhap vao canh a: ";
	cin >> a;
	cout << "Nhap vao canh b: ";
	cin >> b;
	cout << "Nhap vao canh c: ";
	cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac bang " << fixed << setprecision(10) << S << endl;
	return 0;
}