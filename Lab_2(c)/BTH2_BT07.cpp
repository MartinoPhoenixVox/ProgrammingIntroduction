/*Viet phuong trinh nhap vao toa do hai diem, tinh va in ra khoang cach giua hai diem
Date: Nov-2, 2021*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, d = 0.0;
	cout << "Nhap toa do diem thu 1: ";
	cin >> x1 >> y1;
	cout << "Nhap toa do diem thu 2: ";
	cin >> x2 >> y2;
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << "Khoang cach giua 2 diem bang: " << fixed << setprecision(1) << d << endl;
	return 0;
}